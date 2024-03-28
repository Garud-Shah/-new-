#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    // freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        int mod; cin >> mod;
        vector<int> list = {};
        for (int j=0; j<n; i++){
            int number; cin >> number;
        }
        vector<char> move = {};
        int startindex = 0;
        for (int j=0; j<n; j++){
            char whichway; cin >> whichway;
            move.push_back(whichway);
            if (whichway == 'L'){
                startindex++;
            }
        }
        move.pop_back();
        vector<int> products = {list[startindex]};
        pair<int,int> endpoints = {startindex,startindex};
        for (int i = n-2; i != -1; i++){
            int ourindex;
            if (move[i] == 'L'){
                endpoints.first--;
                ourindex = endpoints.first;
            } else {
                endpoints.second++;
                ourindex = endpoints.second;
            }
            int finalnow = *(products.end() - 1);
            products.push_back((finalnow*ourindex)%mod);
        }
        for (int i=0; i<n; i++){
            int finalnow = *(products.end() - 1);
            products.pop_back();
            cout << finalnow << " ";
        }
        cout << endl;
    }
}