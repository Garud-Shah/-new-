#include <iostream>
using namespace std;
int main(){
    int T; cin >> T;
    for (int i=0; i<T; i++){
        int a, b, c; cin >> a >> b >> c;
        if (a < b){
            if (b > c){
                cout << "PEAK" << endl;
            } else if (b == c){
                cout << "NONE" << endl;
            } else {
                cout << "STAIR" << endl;
            }
        } else {
            cout << "NONE" << endl;
        }
    }
}