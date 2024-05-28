import geometry;
unitsize(1cm);
real r = 5;
real k = 4;
pair A = (0, 0);
pair O = (10, 0);
dot(A);
label("$O$", A, NW);
for (real i = -180; i < 180; i+=0.01){
    pair B = dir(i)*k + A;
    dot(B, 1);
    pair Bp = B * r*r / distance(A, B)^2;
    if (i == -180){
        dot(B);
        dot(Bp);
        label("$A$", B, SW);
        label("$A'$", Bp, SE);
    }   
    if (i == 0){
        dot(B);
        dot(Bp);
        label("$B$", B, SW);
        label("$B'$", Bp, SW);
    }  
    if (i == 45){
        dot(B);
        dot(Bp);
        label("$C$", B, SW);
        label("$C'$", Bp, SW);
    }  
}
