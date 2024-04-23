#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    int MOD = 1'000'000'007;
    for (int i=0; i<t; i++){
        vector<int> dp_array = {1, 2};
        int N; cin >> N;
        int K; cin >> K;
        set<int> szset = {};
        for (int j=0; j<2*K; j++){
            int input; cin >> input;
            szset.insert(input);
        }
        int S = N - szset.size();
        for (int j=2; j<S; j++){
            long long int dp_array_no_mod = dp_array[j-1] + (j-1)*dp_array[j-2];
            dp_array.push_back(dp_array_no_mod % MOD);
        }
        long long int pre = dp_array[S - 1] ;// * ((MOD+1)/2);
        int ans = pre % MOD;
        cout << ans << endl;

    }
}