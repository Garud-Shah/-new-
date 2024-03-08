#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x1,x2,y1,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    cin >> x5;
    cin >> y5;
    cin >> x6;
    cin >> y6;
    string out="NO";
    for (int x=0;x<(x2-x1) ;x++ ){
        if (((x>=x3) && (x<=x4))||((x>=x5) && (x<=x6))){
            for (int y=0;y<(y2-y1) ;y++ ){
                if (!((y>=y3) && (y<=y4))||((y>=y5) && (y<=y6))){
                    out="YES";
                    break;
                }
            }
        } else {
            out="YES";
            break;
        }
    }
    cout << out;
}