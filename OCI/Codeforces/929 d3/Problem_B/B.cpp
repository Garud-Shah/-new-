#include <iostream>
using namespace std;
int main(){
    freopen("inputB", "r", stdin);
    freopen("outputB", "w", stdout);
    int t; cin >> t;
    for (int currentcase = 0; currentcase < t; currentcase++){
        int n = 0; int sum = 0;
        bool res1 = false;
        cin >> n;
        for (int cycle = 0; cycle < n; cycle++){
            int currentnumber; cin >> currentnumber;
            sum += currentnumber; sum %= 3;
            if ((currentnumber % 3) == 1){
                res1 = true;
            }
        }
        if (sum == 0){
            cout << 0 << endl;
        } else if (sum == 2){
            cout << 1 << endl;
        } else {
            if (res1){
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}