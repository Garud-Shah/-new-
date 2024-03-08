#include <iostream>
#include <vector>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("shuffle.out","w",stdout);
    int N;
    vector<int> S_perm = {};
    vector<int> ID = {};
    cin >> N;
    for (int i=0; i<N; i++){
        int input;
        cin >> input;
        S_perm.push_back(input-1);
    }
    for (int i=0; i<N; i++){
        int input;
        cin >> input;
        ID.push_back(input);
    }
    for (int i=0; i<N; i++){
        int index = S_perm[i];
        index = S_perm[index];
        index = S_perm[index];
        int newID= ID[index];
        cout << newID << "\n";
    }
}