#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int testnumber = 0; testnumber < t; testnumber++){
        int n; cin >> n;
        for (int i=0; i<n; i++){
            for (int k_i=0; k_i<2; k_i++){
                for (int j=0; j<n; j++){
                    for (int k_j=0; k_j<2; k_j++){
                        if (!((i + j) % 2)){
                            cout << "#";
                        } else {
                            cout << ".";
                        }
                    }
                }
                cout << endl;
            }
        }
    }
        
}