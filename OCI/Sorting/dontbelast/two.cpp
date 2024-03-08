#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string,int> productionvalues {{"Bessie",0}, {"Elsie",0}, {"Daisy",0}, {"Gertie",0}, {"Annabelle",0}, {"Maggie",0}, {"Henrietta",0}};
    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        string id;
        int input;
        cin >> id;
        cin >> input;
        productionvalues[id] += input;
    }
    // find second-lowest value in map
}