#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        string input; cin >> input;
        char a = *(input.end() - 1);
        if (a == '0'){
            cout << "E" << endl;
        } else {
            cout << "B" << endl;
        }
    }
}