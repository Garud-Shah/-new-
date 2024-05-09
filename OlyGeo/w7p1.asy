// imports
import math;
import cse5;
import olympiad;
size(7inch);
// construction
	// “large” value
		int large;
		large = 1000;
    // initial points
        pair A, B, C;
        A = (0, 0);
        B = (5, 0);
        C = (4, 4);
    // circumstuff
        pair O = circumcenter(A, B, C);
        path Circumcircle_ABC = circumcircle(A, B, C);
        // tangents
            // A
                pair rotate_A_temp = rotate(90, A) * O;
                pair delta_A = rotate_A_temp - A;
                pair A_up = A + delta_A * large;
                pair A_down = A - delta_A * large;
                drawline(A + delta_A, A - delta_A);
            // B
                pair rotate_B_temp = rotate(90, B) * O;
                pair delta_B = rotate_B_temp - B;
                pair B_up = B + delta_B * large;
                pair B_down = B - delta_B * large;
                drawline(B + delta_B, B - delta_B);
            // C
                pair rotate_C_temp = rotate(90, C) * O;
                pair delta_C = rotate_C_temp - C;
                pair C_up = C + delta_C * large;
                pair C_down = C - delta_C * large;
                drawline(C + delta_C, C - delta_C);
        // final points
            path line_tA = A_up -- A_down;
            path line_tB = B_up -- B_down;
            path line_tC = C_up -- C_down;
            path AB = ((A - B) * large + A) -- ((B - A) * large + B);
            path BC = ((C - B) * large + C) -- ((B - C) * large + B);
            path AC = ((A - C) * large + A) -- ((C - A) * large + C);
            pair P = intersectionpoints(AB, line_tC)[0];
            pair Q = intersectionpoints(BC, line_tA)[0];
            pair R = intersectionpoints(AC, line_tB)[0];
// drawing to the screen	
    // dots for everything!
        dot(A); dot(B); dot(C);
        dot(O);
        dot(P); dot(Q); dot(R);
    // // label points
    //     // initial
    //     label(“$A$”, A);
    //     label(B, “$B$”);
    //     label(C, “$C$”);
    // circumcenter
    //     label("$O$", O)
    // draw things
        // triangle
            drawline(A, C);
            drawline(A, B);
            drawline(B, C);
        // circumcircle
        draw(Circumcircle_ABC);
        // colinear
        drawline(P, Q, dashed);
        // tangents of the circle drawn in construction
        dot((-4, -4), white);