#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    int amod = a; int bmod = b;
    while (min(amod, bmod) != 0){
        if (a == max(a,b)){
            a = a-b;
        } else {
            b = b-a;
        }
    }
    return max(amod,bmod);
}
int main(){
    // freopen("inputD", "r", stdin);
    // freopen("outputD", "w", stdout);
    int t; cin >> t;
    for (int currentcase = 0; currentcase < t; currentcase++){
        int n = 0; int gcdnow = 0; int fails = 0;
        cin >> n;
        vector<int> numberlist = {};
        for (int cycle = 0; cycle < n; cycle++){
            cout << "Line 24" << " Iteration " << cycle << " TC" << currentcase;
            int currentnumber; cin >> currentnumber;
            cout << "Line 26" << " Iteration " << cycle << " TC" << currentcase;
            if (cycle == 0){
                gcdnow = currentnumber;
            }
            cout << "Line 29" << " Iteration " << cycle << " TC" << currentcase;
            gcdnow = gcd(gcdnow, currentnumber);
            // freopen("stdout", "w", stdout);
            cout << "Line 33" << " Iteration " << cycle << " TC" << currentcase;
            // freopen("outputD", "w", stdout);
            numberlist.push_back(currentnumber);
        }
        for (auto currentnumber: numberlist){
            if (gcdnow == currentnumber){
                fails++;
            }
        }
        if (fails < 2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}