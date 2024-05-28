#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        vector<bool> integer = {};
        int intin; cin >> intin;
        while (intin != 0){
            integer.push_back(intin % 2);
            intin /= 2;
        }
        vector<bool> down = {};
        bool need_to_fix = false;
        for (int j=1; j<integer.size(); j++){
            if ((integer[j] == 1) && (integer[j-1] == 1)){
                integer[j-1] = 0;
                down.push_back(1);
                need_to_fix = true;
            } else {
                down.push_back(0);
            }
        }
        if (!need_to_fix){
            cout << integer.size() << "\n";
            for (auto i: integer){
                cout << i << " ";
            }
            cout << "\n";
        } else {
            integer.push_back(1);
            
            cout << integer.size() << "\n";
            for (auto i: integer){
                cout << i << " ";
            }
        }
    }
}