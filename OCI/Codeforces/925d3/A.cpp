#include <iostream>
using namespace std;
int main(){
    // freopen("r", "input", stdin);
    // freopen("w", "output", stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int sum;
        cin >> sum;
        int a = 2;
        while (a >= 0){
            if (sum <= 26*a){
                cout << 'a';
                sum--;
            } else {
                char x = sum - 26*a + 'a' - 1;
                cout << x;
                sum = 26*a;
            }
            a--;
        }
        cout << endl; 
    }
}