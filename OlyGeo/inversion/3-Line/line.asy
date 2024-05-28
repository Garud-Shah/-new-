import geometry;
unitsize(1cm);
real r = 5;
real k = 7;
pair A = (0, 0);
dot(A);
label("$A$", A, NW);
for (real i = -10; i < 10; i+=0.01){
    pair B = (k, i);
    dot(B, 1);
    pair Bp = B * r*r / (k*k + i*i);
    if (i = 4.3){
        dot(Bp);
        label("$B'$", Bp, N);
        dot(B)
        label("$B$", B, E);
    }
    if (i = 0){
        dot(Bp);
        label("$B'$", Bp, N);
        dot(B)
        label("$B$", B, SE);
    }

}
