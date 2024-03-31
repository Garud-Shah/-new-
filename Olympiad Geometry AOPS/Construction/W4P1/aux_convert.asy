// ANGLE BISECTORS - TRIANGLE DEF
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