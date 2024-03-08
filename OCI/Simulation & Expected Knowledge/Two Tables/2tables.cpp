#include <iostream>
using namespace std;
int testcase(){
    //Inputting
    // Room Dimensions
    int roomwidth, roomheight;
    cin >> roomwidth;
    cin >> roomheight;
    // Table Coords (x)
    int xmin, xmax;
    cin >> xmin;
    cin >> xmax;
    // Table Coords (y)
    int ymin, ymax;
    cin >> ymin;
    cin >> ymax;
    // New Table Dimensions
    int tablewidth, tableheight;
    cin >> tablewidth;
    cin >> tableheight;
    //Check 1 - do we need to move?
    if (xmin > tablewidth){
        return 0;
    }
    if (ymin > tableheight){
        return 0;
    }
    int out = 0;
    //Check 2 - x direction
    if ((xmax-xmin+tablewidth) > roomheight){
        //Check 3 - y direction
        if ((ymax-ymin+tableheight) > roomheight){
            return -1;
        } else {
            return ymax - ymin;
        }
    }
    if ((ymax-ymin+tableheight) > roomheight){
        if ((ymax-ymin)>(xmax-xmin)){
            return ymax-ymin;
        } else {
            return xmax-xmin;
        }
    }
}
int main(){
    int number;
    cin >> number;
    for (int i=0; i<number; i++){
        int out =testcase();
        cout << out;
    }
}