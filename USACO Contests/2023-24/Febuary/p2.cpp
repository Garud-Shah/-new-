#include <iostream>
#include <vector>
using namespace std;
int lookup(string str, int index){
    int a = index % str.size();
    return str[a];
}
int main(){
    // cout <<  freopen("output", "w", stdout);
    string fwdbkd;
    vector<int> list = {};
    int N; cin >> N;
    int M; cin >> M;
    cin >> fwdbkd;
    int asum = 0;
    for (int i=0; i<N; i++){
        int input; cin >> input;
        asum += input;
        list.push_back(input);
    }
    bool toggle = true;
    int start = 0;
    int sum = 0;
    int totalsum = 0;
    // if (fwdbkd == "RRL"){
    //     cout << 2; return 0;
    // }
    int index = 0;
    for (int i=0; i<(N+start); i++){
        if (lookup(fwdbkd, i) != lookup(fwdbkd, i+1)){
            // cout << i << "-31X";
            if (toggle){
                start = i;
                toggle = false;
                // cout << i << "-35X";
            }
            totalsum += min(M,sum);
            sum = 0;
            if (((lookup(fwdbkd, i)) == 'L') && !toggle){
                sum -= list[i % N];
                // cout << i << "-41X";
            } else if (((lookup(fwdbkd, i)) == 'R') && !toggle){
                sum -= list[i % (N+1)];
                index = 0;
                // cout << i << "-45X";
            }
            if ((((lookup(fwdbkd, i)) == 'L')) && (((lookup(fwdbkd, i+1)) == 'L')) && (((lookup(fwdbkd, i+2)) == 'R'))) {
                sum += list[(i+1) % N];
            }
        } else {
            if ((((lookup(fwdbkd, i)) == 'L')) && (((lookup(fwdbkd, i+1)) == 'L')) && (((lookup(fwdbkd, i+2)) == 'R'))) {
                sum += list[(i+1) % N];
            }
            if (!toggle){
                // cout << i << "-49X";
                if (index != 0){
                    sum -= list[i % N];
                    //cout << i << "-52";
                }
                index = 1;
            }
        }
    }
    cout << asum + totalsum;
}

