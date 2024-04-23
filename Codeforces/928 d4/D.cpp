#include <iostream>
#include <set>
using namespace std;
int main(){
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    int t;
    cin >> t;
    for (int num=0; num<t; num++){
        multiset<int> ms = {};
        int n; cin >> n;
        for (int i=0; i<n; i++){
            int input; cin >> input;
            ms.insert(input);
        }
        int tally = 0;
        for (auto i = ms.begin(); i != ms.end(); i++){
            int target = 2147483647 - *i;
            int k = target - 1;
            int inms = *ms.upper_bound(k);
            if (inms == target){
                ms.erase(ms.find(target));
                ms.erase(i);
                i--;
                tally++;
            }
        }
        cout << (tally + ms.size()) << endl;
    }
}