import geometry;
unitsize(1cm);
pair invert(pair center, real radius, pair pt){
    return pt * (radius*radius/
    (distance(pt, center)*distance(pt, center)));
}
path diametercircle(pair A, pair B){
    return circle((A + B)/2, distance(A,B)/2);
}
path orthocircle(pair extreme_pt, pair invcenter, real radius){
    return diametercircle(extreme_pt, invert(invcenter, radius, extreme_pt));
}
real r = 5;
real k = 4;
pair O = (0, 0);
dot("$O$", O, NW);
pair A = (7, 0);
dot("$A$", A);
draw(O -- 1.2 * A);
draw(orthocircle(A, ))

