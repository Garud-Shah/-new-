#include <iostream>
using namespace std;
int main(){
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        int final1loc = -1;
        int final1locprevious = -1;
        bool toggle = false;
        for (int j=0; j<n; j++){
            final1locprevious = final1loc;
            int tally = 0;
            for (int k=0; k<n; k++){
                char input; cin >> input;
                int a = input - '0';
                if (a == 1){
                    final1loc = k;
                }
            }
            if (!(final1loc == -1) || (final1locprevious == -1)){
                if (final1loc == final1locprevious){
                    if (!toggle){
                        cout << "SQUARE" << endl;
                        toggle = true;
                    }
                    
                } else {
                    if (!toggle){
                        cout << "TRIANGLE" << endl;
                        toggle = true;
                    }
                }
            }
            // if ((previous == 0) || (tally == 0)){
            //     continue;
            // } else if (previous != tally){
            //     cout << "TRIANGLE" << endl;
            //     break;
            // } else {
            //     cout << "SQUARE" << endl;
            //     break;
            // }
        }
    }
}