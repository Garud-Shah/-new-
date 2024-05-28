#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n, m; cin >> n >> m;
        if (m > n){
            cout << "No\n";
            continue;
        }
        if (((m - n) % 2) != 0){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
    }
}