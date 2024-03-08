#include <iostream>
#include <vector>
using namespace std;
int average(vector<int> v){
    int a = v.size();
    int sum = 0;
    for (auto i : v){
        sum += i;
    }
    return sum/a;
}
string testcase(vector<int> v){
    int avg = average(v);
    int sum = 0;
    int a = v.size();
    for (int i=0; i<a; i++){
        sum += v[i];
        if (sum < avg*(i+1)){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    // freopen("r", "input", stdin);
    // freopen("w", "output", stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        vector<int> ourlist = {};
        for (int i=1; i<=n; i++){
            int input; cin >> input;
            // cout << input << " ";
            ourlist.push_back(input);
        }
        // cout << endl;
        cout << testcase(ourlist) << endl;
    }
}
