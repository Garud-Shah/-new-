#include <iostream>
using namespace std;
int main(){
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    string str; cin >> str;
    int ans = 0;
    for (int i=0; i<26; i++){
        for (int j=0; j<26; j++){
            char char1 = 'A' + i;
            char char2 = 'A' + j;
            string newstr = "XXXX";
            int cnt = 0;
            for (int k=0; k<26; k++){
                if (str[k] == char1){
                    newstr[cnt] = 'A';
                    cnt++;
                }
                if (str[k] == char2){
                    newstr[cnt] = 'B';
                    cnt++;
                }
            }
            if (newstr == "ABAB"){
                ans++;
            }
        }
    }
    cout << ans;
}