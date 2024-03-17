#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // freopen("output", "w", stdout);
    int numberoffarms; cin >> numberoffarms;
    int queries; cin >> queries;
    vector<int> closetimes = {};
    vector<int> visittimes = {};
    for (int i=0; i<numberoffarms; i++){
        int farmsclose; cin >> farmsclose;
        closetimes.push_back(farmsclose);
    }
    for (int i=0; i<numberoffarms; i++){
        int bessiesvisit; cin >> bessiesvisit;
        visittimes.push_back(bessiesvisit);
    }
    vector<int> tosort = {};
    for (int i=0; i<numberoffarms; i++){
        int index = closetimes[i] - visittimes[i];
        tosort.push_back(-index);
    }
    sort(tosort.begin(), tosort.end());
    for (int i=0; i<queries; i++){
        int numberoffarmsneeded; cin >> numberoffarmsneeded;
        int getup; cin >> getup;
        if (tosort[numberoffarmsneeded - 1] < -getup){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}