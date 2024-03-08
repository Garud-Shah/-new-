#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool check(vector<string> a, vector<string> b, int pos){
    map<char,bool> ourmapa = {{'A',false}, {'T',false}, {'C',false}, {'G',false}};
    for (auto i: a){
        ourmapa[i[pos]] = true;
    }
    map<char,bool> ourmapb = {{'A',false}, {'T',false}, {'C',false}, {'G',false}};
    for (auto i: b){
        ourmapb[i[pos]] = true;
    }
    for (auto i: {'A', 'T', 'C', 'G'}){
        if (ourmapa[i] && ourmapb[i]){
            return false;
        }
    }
    return true;
}
int main(){
    freopen("2.in","r",stdin);
    freopen("cownomics.out","w",stdout);
    int M,N;
    cin >> N >> M;
    vector<string> genomics_spotty = {};
    vector<string> genomics_not_spotty = {};
    for (int i=0; i<N; i++){
        string input; cin >> input;
        genomics_spotty.push_back(input);
    }
    for (int i=0; i<N; i++){
        string input; cin >> input;
        genomics_not_spotty.push_back(input);
    }
    int sum = 0;
    for (int i=0; i<M; i++){
        sum += check(genomics_spotty, genomics_not_spotty, i);
    }
    cout << sum;
}