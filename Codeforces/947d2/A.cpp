#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        int previous;
        int current; 
        bool ok = true;
        cin >> n;
        cin >> previous;
        cin >> current;
        for (int j=1; j<n-1; j++){
            int next; cin >> next;
            if ((previous > current) && (next > current)){
                ok = false;
            }
            previous = current;
            current = next;
        }
        if (ok){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}