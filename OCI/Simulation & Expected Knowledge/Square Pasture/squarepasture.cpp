#include <iostream>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("square.out","w",stdout);
    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int xmin = min(min (x1,x2),min(x3,x4));
    int xmax = max(max (x1,x2),max(x3,x4));
    int ymin = min(min (y1,y2),min(y3,y4));
    int ymax = max(max (y1,y2),max(y3,y4));
    int maxlen = max((xmax-xmin),(ymax-ymin ));
    cout << maxlen*maxlen;
}