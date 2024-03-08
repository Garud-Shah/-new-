#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int tallya = 0;
        int tallyb = 0;
        for (int j=0; j<5; j++){
            char input; cin >> input;
            if (input == 'A'){
                tallya++;
            }
            if (input == 'B'){
                tallyb++;
            }
        }
        if (tallya > tallyb){
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }
}