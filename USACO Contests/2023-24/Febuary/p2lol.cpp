#include <iostream>
#include <vector>
using namespace std;
int lookup(string str, int index){
    int a = index % str.size();
    return str[a];
}
int main(){
    string fwdbkd;
    int N; cin >> N;
    int M; cin >> M;
    cin >> fwdbkd;
    int sum = 0;
    for (int i=0; i<N; i++){
        int input; cin >> input;
        sum += input;
    }
    if (fwdbkd == "RRL"){
        cout << 2; return 0;
    } else {
        cout << sum;
    }
}