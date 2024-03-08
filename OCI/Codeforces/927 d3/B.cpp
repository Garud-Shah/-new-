#include <iostream>
using namespace std;
int main(){
    // freopen("output", "w", stdout);
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        int number = 0;
        for (int i=0; i<n; i++){
            int input; cin >> input;
            number = (number - number % input) / input; // integer division
            number++;
            number *= input;
        }
        cout << number << endl;
    }
}