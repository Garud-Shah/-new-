#include <iostream>
using namespace std;
int main(){
    freopen("inputC", "r", stdin);
    freopen("outputC", "w", stdout);
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
        
    }
}