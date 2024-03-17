#include <iostream>
#include <vector>
using namespace std;
int lookup(string str, int index){
    int a = index % str.size();
    return str[a];
}
int main(){
    string fwdbkd;
    vector<int> list = {};
    int N; cin >> N;
    int M; cin >> M;
    cin >> fwdbkd;
    for (int i=0; i<N; i++){
        int input; cin >> input;
        list.push_back(input);
    }
    int sum = 0;
    
}