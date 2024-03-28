#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int N; cin >> N;
        while (!(N % 10)){
            N /= 10;
        }
        if (!(N % 2)){
            cout << "No";
            break;
        }
        if (!(N % 5)){
            cout << "No";
            break;
        }
        
    }
}