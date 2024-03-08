#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void test(){
    vector<vector<int>> array = {};
    int N; cin >> N;
    int M; cin >> M;
    for (int i=0; i<N; i++){
        vector<int> inputvec = {};
        for (int j=0; j<M; j++){
            int input; cin >> input;
            inputvec.push_back(input);
        }
        array.push_back(inputvec);
    }
    int sum =0;
    for (int i=0; i<M; i++){
        int currentsum = 0;
        vector<int> currentvector = {};
        for (int j=0; j<N; j++){
            currentvector.push_back(array[j][i]);
        }
        sort(currentvector.begin(),currentvector.end());
        for (int j=0; j<N; j++){
            int minusnumber = j-1;
            int plusnumber = N-j;
            int times = plusnumber - minusnumber;
            currentsum += currentvector[i]*times;
        }
        sum += currentsum;
    }
    cout << sum << endl;
}
int main(){
    freopen("casino.in","r",stdin);
    freopen("casino.out","w",stdout);
    int number; cin >> number;
    for (int i=0; i<number; i++){
        test();
    }
}