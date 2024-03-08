#include <iostream>
#include <vector>
using namespace std;
vector<int> cows = {};
// Checks whether 'cows' is sorted
bool is_sorted(){
    int previous = 0;
    for (auto i: cows){
        if (i <= previous){
            return false;
        }
        previous = i;
    }
    return true;
}
int main(){
    // Inputting CCode
    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        int input; cin >> input;
        cows.push_back(input);
    }
    // Main Loop
    int i=0;
    for (; !is_sorted(); i++){
        int cownumber = cows[0];
        cows.erase(cows.begin());
        for (int i=0; i<(N-1); i++){
            if (cows[i] == (cownumber-1)){
                cows.insert(cows.begin()+i+1,cownumber);
                break;
            }
        }
    }
    cout << i;
}