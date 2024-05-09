if(!settings.multipleView) settings.batchView=false;
settings.tex="pdflatex";
defaultfilename="w8p2-1";
if(settings.render < 0) settings.render=4;
settings.outformat="";
settings.inlineimage=true;
settings.embed=true;
settings.toolbar=false;
viewportmargin=(2,2);

import olympiad;
import cse5;
size(5inch);
pair A, B, C;
A = (0, 0);
B = (5, 5);
C = (6, 0);
draw(A -- B -- C -- cycle);
pair I = incenter(A, B, C);
pair Aprime = foot(I, B, C);
pair Bprime = foot(I, C, A);
pair Cprime = foot(I, A, B);
pair P = foot(I, A, Aprime);
draw(I -- Aprime);
draw(I -- Bprime);
draw(I -- Cprime);
draw(I -- P);
draw(incircle(A, B, C));
draw(circumcircle(A, Bprime, Cprime));
draw(A -- Aprime);
draw(B -- P -- C -- cycle);
dot(A); dot(B); dot(C);
dot(Aprime); dot(Bprime); dot(Cprime);
dot(I); dot(P);
label("$A$", A, SW);
label("$A'$", Aprime, NE);
label("$B'$", Bprime, S);
label("$C'$", Cprime, NW);
label("$B$", B, W);
label("$C$", C, SE);
label("$I$", I, NW);
label("$P$", P, S);
