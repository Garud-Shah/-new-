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
pair O = (0,0);
real theta = 27;

real outpush = 24