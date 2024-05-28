import geometry;
unitsize(1cm);
pair invert(pair center, real radius, pair pt){
    return pt * (radius*radius/
    (distance(pt, center)*distance(pt, center)));
}
real r = 5;
real k = 4;
pair O = (0, 0);
label("$O$", O, NW);

pair A = (7, 0);
pair B = (11, 0);
pair C = (8, 2);

pair Ap = invert(O, r, A);
pair Bp = invert(O, r, B);
pair Cp = invert(O, r, C);

dot("$A$", A);
dot("$B$", B);
dot("$C$", C);

dot("$A'$", Ap);
dot("$B'$", Bp);
dot("$C'$", Cp);

draw(circle((Ap + Bp)/2, distance(Ap, Bp)/2));
draw(circle((Bp + Cp)/2, distance(Bp, Cp)/2));

draw(A -- B -- C);