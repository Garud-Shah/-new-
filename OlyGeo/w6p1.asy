unitsize(2 cm);

pair A, B, C, D, E, M;

A = (-1,0);
B = (1,0);
label("$A$", A, SW);
label("$B$", B, SE);
for (int i=0; i<180; ++i){
    C = dir(i);
    D = (C + rotate(90,A)*(C))/2;
    E = (B + rotate(90,C)*(B))/2;
    M = (D + E)/2;
    draw(A--B);
    draw(arc((0,0),1,0,180));
    dot(M);
}