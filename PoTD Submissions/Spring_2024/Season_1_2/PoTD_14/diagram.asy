import olympiad;
size(5inch);
// isoceles trapezoid
    // deviation seed quantites
        real ground = 0;
        real delta_ground = 3;
        real top = 2;
        real delta_top = 1.5;
    // points
        pair A = (-delta_top, top);
        pair D = (delta_top, top);
        pair C = (delta_ground, ground);
        pair B = (-delta_ground, ground);
    // paths
        path line_BC = B -- C;
        path circumcircle = circumcircle(A, B, C);
        draw(circumcircle);
        draw(A -- D -- C -- B -- cycle);
    // dots and labels
        dot(A); dot(B); dot(C); dot(D);
        label("$A$", A, NW);
        label("$D$", D, NE);
        label("$C$", C, SW);
        label("$B$", B, SE);
// getting E
    pair E = circumcircle;
