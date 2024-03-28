#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        map<int,set<int>> stuff = {};
        int n; cin >> n;
        for (int j=0; j<n; i++){
            int input; cin >> input;
            if (stuff.count(input)){
                stuff[input] = {j};
            } else {
                stuff[input].insert(j);
            }
        }
        int q;
        cin >> q;
        for (int i=0; i<q; i++){
            int l; cin >> l;
            int r; cin >> r;
            int num1 = -1;
            int num2 = -1;
            for (auto i: stuff){
                set<int> run = i.second;
                int bottom = *run.upper_bound(l);
                int top = *run.lower_bound(r);
                if (top < bottom){
                    num1 = bottom;
                    num2 = top;
                    break;
                }
            }
            cout << num1 << " " << num2 << endl;
        }
    }
}