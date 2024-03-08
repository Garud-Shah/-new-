#include <iostream>
using namespace std;
int main(){
    freopen("team.in","r",stdin);
    freopen("team.out","w",stdout);
    int n;
    cin >> n;
    int a = 0;
    int in1, in2, in3;
    for (int i=0;i<n;i++){
        cin >> in1 >> in2 >> in3;
        if ((in1 + in2 +in3)>1){
            a++;
        }
    }
    cout << a;
}