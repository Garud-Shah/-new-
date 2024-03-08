#include <iostream>
using namespace std;
int main(){
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);
    int lakeloc;
    int barnloc;
    int rockloc;
    char a;
    for (int i=0; i<100; i++){
        cin >> a;
        if (a=='L'){
            lakeloc =i;
        }
        else if (a=='B'){
            barnloc = i;
        }
        else if (a=='R'){
            rockloc = i;
        }
        

    }
    int xlake = lakeloc % 10;
    int ylake = lakeloc/10;
    int xbarn = barnloc % 10;
    int ybarn = barnloc/10;
    int xrock = barnloc % 10;
    int yrock = barnloc/10;
    int b;
    int boolx1 = xlake == xbarn;
    int boolx2 = xrock == xlake;
    int booly1 = ylake == ybarn;
    int booly2 = yrock == ylake;
    int checkx = boolx1 + boolx2;
    int checky = booly1 + booly2;
    if (checkx == 2){
        b = abs(ylake - ybarn) + 2;
    } else if (checky == 2){
        b = abs(xlake - xbarn) + 2;
    } else {
        b = abs(xlake - xbarn) + abs(ylake-ybarn);
    }    
    cout << b-1;
}