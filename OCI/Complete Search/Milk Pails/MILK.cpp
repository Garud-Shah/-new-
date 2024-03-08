#include <iostream>
using namespace std;
int main(){
    // freopen("pails.in","r",stdin);
    // freopen("pails.out","w",stdout);
    int X,Y,M;
    cin >> X >> Y >> M;
    int max_for_x = (M - M % X)/X;
    int max_for_y = (M - M % Y)/Y;
    int maximum = max_for_x*X;
    int current_y = 0;
    for (int current_x = max_for_x; current_x >= 0; current_x++){
        int check = M - current_x*X - current_y*Y;
        while (check > Y){
            current_y++;
        }
        maximum = max(maximum, (M-check));
        current_y = 0;
    }
    cout << maximum;
}
