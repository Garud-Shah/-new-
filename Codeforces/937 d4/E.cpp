#include <iostream> 
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    for (int test=0; test<t; test++){
        int n; cin >> n;
        string str; cin >> str;
        vector<int> factor_list = {};
        for (int i=1; i<=n; i++){
            if (!(n % i)){
                factor_list.push_back(i);
            }
        }
        for (auto i: factor_list){
                string substring = str.substr(0, i);
                string astring = "";
                for (int j=0; j<(n/i); j++){
                    astring += substring;
                }
                int errors = 0;
                for (int a=0; a<n; a++){
                    if (astring[a] != str[a]){
                        errors += 1;
                    }
                }
                if (errors < 2){
                    cout << i << endl;
                    break;
                }
                string substring2 = str.substr(i, i);
                string astring2 = "";
                for (int j=0; j<(n/i); j++){
                    astring2 += substring2;
                }
                int errors2 = 0;
                for (int a=0; a<n; a++){
                    if (astring2[a] != str[a]){
                        errors2 += 1;
                    }
                }
                if (errors2 < 2){
                    cout << i << endl;
                    break;
                }
        }
    }
}