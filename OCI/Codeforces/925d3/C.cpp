#include <iostream>
#include <vector>
using namespace std;
int main(){
    // freopen("r", "input", stdin);
    // freopen("w", "output", stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> list = {};
        for (int j=0; j<n; j++){
            int input; cin >> input;
            list.push_back(input);
        }
        int fromstart = 1;
        int fromend = 1;
        int startvalue;
        int endvalue;
        for (int j=0; j<(n-1); j++){
            startvalue = list[0];
            if (list[j] != list[j+1]){
                break;
            } else {
                fromstart++;
            }
        }
        for (int j=n-1; j>0; j--){
            endvalue = list[n-1];
            if (list[j] != list[j-1]){
                break;
            } else {
                fromend++;
            }
        }
        if (startvalue != endvalue){
            cout << (n - max(fromstart,fromend)) << endl;
        } else {
            if ((fromstart + fromend) < n){
                cout << (n - fromstart - fromend) << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}