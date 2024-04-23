#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int N; cin >> N;
        vector<int> myvec = {};
        for (int j=0; j<N; j++){
            int a; cin >> a;
            myvec.push_back(a);
        }
        sort(myvec.begin(), myvec.end());
        int nums = 1;
        int ans = 0;
        int num = myvec[0];
        for (int i=1; i<N; i++){
            if (myvec[i] == num){
                nums++;
            } else {
                int add = nums/3;
                ans += add;
                nums = 1;
                num = myvec[i];
            }
        }
        cout << ans << endl;
    }
}