#include <iostream>
using namespace std;
int main(){
    freopen("inputA", "r", stdin);
    freopen("outputA", "w", stdout);
    int t; cin >> t;
    for (int currentcase = 0; currentcase < t; currentcase++){
        int n = 0; int sum = 0;
        cin >> n;
        for (int cycle = 0; cycle < n; cycle++){
            int currentnumber; cin >> currentnumber;
            sum += abs(currentnumber);
        }
        cout << sum << endl;
    }
}