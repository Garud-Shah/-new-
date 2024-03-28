#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        int start = -1;
        int end = -1;
        for (int i=0; i<n; i++){
            char input; cin >> input;
            if ((start == -1) && (input == 'B')){
                start = i;
            } 
            if (input == 'B'){
                end = i;
            }
        }
        int total = end - start + 1;
        cout << total << endl;
    }
}