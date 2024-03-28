#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        map<char,int> searchlist = {};
        for (int i=0; i<26; i++){
            char newchar = 'a' + i;
            searchlist[newchar] = 0;
        }
        int n;
        cin >> n;
        for (int i=0; i<n; i++){
            int input;
            cin >> input;
            for (auto charmap: searchlist){
                if (charmap.second == input){
                    cout << charmap.first;
                    searchlist[charmap.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}