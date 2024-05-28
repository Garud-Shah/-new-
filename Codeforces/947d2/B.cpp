#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> numbers = {};
        for (int j=0; j<n; j++){
            int input; cin >> input;
            numbers.push_back(input);
        }
        sort(numbers.begin(), numbers.end());
        int ctr = 1;
        int num1 = numbers[0];
        for (; (ctr < n) && ((numbers[ctr] % num1) == 0); ctr++){ }
        int num2 = numbers[ctr];
        for (; (ctr < n) && (((numbers[ctr] % num1) == 0) || ((numbers[ctr] % num2) == 0)); ctr++){ }
        if (ctr == n){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}