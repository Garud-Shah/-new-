#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        char previous = '.';
        int coins = 0;
        bool toggle = true;
        for (int j=0; j<n; j++){
            char input; cin >> input;
            if (input == '@'){
                coins++;
            } else if ((input == '*') && (previous == '*')){
                if (toggle){
                    cout << coins << endl;
                }
                toggle = false;
            }
            previous = input;
        }
        if (toggle){
            cout << coins << endl;
        }
        toggle = false;
    }
}