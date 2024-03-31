// INITIALIING CODE
    import olympiad;
    import cse5;
    unitsize(1inch);
    int large = 100000;
// BUILDING
    // TRIANGLE
        pair[] Triangle_ABC = {(0,0), (4,4), (7,0)};
    // MIDPOINTS
        pair sum = (0,0);
        for (pair i : Triangle_ABC){
            dot(i);
            sum += i;
        }
        pair[] Triangle_DEF = {};
        for (pair i : Triangle_ABC){
            pair mid = (sum - i)/2;
            Triangle_DEF.push(mid);
            dot(mid);
        }
    // ANGLE BISECTORS - TRIANGLE ABC
        pair Incenter_ABC = incenter(Triangle_ABC[0], 
                                     Triangle_ABC[1], 
                                     Triangle_ABC[2]);
        path[] Angle_Bisectors = {};
        for (pair i: Triangle_ABC){
            drawline(i, Incenter_ABC);
            pair Delta_i = i - Incenter_ABC;
            pair Delta_Center = -Delta_i;
            pair far_i = large * Delta_i + i;
            pair far_Center = large * Delta_Center + i;
            path Bisector = far_i -- far_Center;
            Angle_Bisectors.push(Bisector);
        }
    // ANGLE BISECTORS - MIDPOINTS
        pair Incenter_DEF = incenter(Triangle_DEF[0], 
                                     Triangle_DEF[1], 
                                     Triangle_DEF[2]);
        path[] Angle_Bisectors = {};
        for (pair i: Triangle_DEF){
            drawline(i, Incenter_DEF);
            pair Delta_i = i - Incenter_DEF;
            pair Delta_Center = -Delta_i;
            pair far_i = large * Delta_i + i;
            pair far_Center = large * Delta_Center + i;
            path Bisector = far_i -- far_Center;
            Angle_Bisectors.push(Bisector);
        }
// DRAWING
    // TRIANGLE
        label(Triangle_ABC[0], "$A$", S);
        label(Triangle_ABC[1], "$B$", NW);
        label(Triangle_ABC[2], "$C$", S);
        draw(Triangle_ABC[0] -- 
             Triangle_ABC[1] --
             Triangle_ABC[2] -- cycle);
    // Triangle_DEF
        label(Triangle_DEF[0], "$D$");
        label(Triangle_DEF[1], "$E$");
        label(Triangle_DEF[2], "$F$");
        draw(Triangle_DEF[0] -- 
             Triangle_DEF[1] --
             Triangle_DEF[2] -- cycle);
    // INCIRCLES
        draw(incircle(
            Triangle_ABC[0],
            Triangle_ABC[1],
            Triangle_ABC[2]));
        draw(incircle(
            Triangle_DEF[0],
            Triangle_DEF[1],
            Triangle_DEF[2]));