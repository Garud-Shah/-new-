#include <iostream>
#include <set>
using namespace std;
int sizeofoverlap(set<int> set1, set<int> set2){
    int count = 0;
    for (int i: set1){
        for (int j: set2){
            if (j == i){
                count++;
                break;
            } else if (j > i){
                break;
            }
        }
    }
    return count;
}
int main(){
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    int t;
    for (int i=0; i<t; i++){
        set<int> numbers = {};
        int n; cin >> n;
        int m; cin >> m;
        int k; cin >> k;
        for (int j=0; j<k; i++){
            numbers.insert(i+1);
        }
        set<int> thingsa = {};
        set<int> thingsb = {};
        for (int j=0; j<m; i++){
            int input; cin >> input;
            if (input < k){
                numbers.insert(input);
            }
        }
        int overlap = sizeofoverlap(thingsa, thingsb);
        for (int j: thingsa){
            numbers.erase(j);
        }
        for (int j: thingsb){
            numbers.erase(j);
        }
        if (numbers.size() != 0){
            goto no;
        }
        if (!(thingsa.size() <= (k/2 + overlap))){
            cout << "NO";
            goto no;
        }
        if (!(thingsb.size() <= (k/2 + overlap))){
            goto no;
        }
        cout << "YES";
        if (i != (t-1)){
            cout << endl;
        }
        no: {
            cout << "NO";
            if (i != (t-1)){
                cout << endl;
            }
            continue;
        }

    }
}