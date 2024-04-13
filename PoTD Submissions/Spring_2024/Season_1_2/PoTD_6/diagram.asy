import olympiad;
import cse5;
unitsize(5inch)
int n = 10;
for (int i=0; i<n; ++i) {
    pair dir1 = dir(360 * i / n);
    pair dir2 = dir(360 * (i + 1) / n);
    draw(dir1 -- dir2); 
}
drawline((0, 1), (0, -1));
drawline((1, 0), (-1, 0));
dot(dir(60)*0.7);
label("$w = r_w \cdot e^{i \theta_w}$", dir(60)*0.7, SE);
dot(dir(143)*0.44);
label("$z = r_z \cdot e^{i \theta_z}$", dir(143)*0.4, SE);