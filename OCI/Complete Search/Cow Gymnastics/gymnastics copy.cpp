#include <iostream>
#include <vector>
using namespace std;
bool testcase(int i){
    const char* str = i + ".in";
    freopen(str,"r",stdin);
    vector<int> rankings = {};
    int N,K;
    for (int i=0;i<N*K;i++){
        int input;
        cin >> input;
        rankings.push_back(input);
    }
    int pairs = 0;
    for (int i=0;i<N;i++){
        for (int j=0;i<N;i++){
            if (i==j){
                break;
            }
            int consitent = 0;
            for (int k=0;i<k;k++){
                int locationa=0;
                int locationb=0;
                for (int a=0;a<N;a++){
                    if (rankings[k*N+a]==i){
                        locationa = a;
                        break;
                    }
                }
                for (int b=0;b<N;b++){
                    if (rankings[k*N+b]==i){
                        locationb = b;
                        break;
                    }
                }
                if (k==0){
                    consitent = abs(locationa-locationb)/(locationa-locationb);
                } else {
                    if (consitent != (abs(locationa-locationb)/(locationa-locationb))){
                        consitent=0;
                    }
                }
            }
            pairs += abs(consitent);        
        }
    }
    int output = pairs/2;
    str = i + ".out";
    freopen(str,"r",stdin);
    int input;
    cin >> input;
    return (input == output);
}
int main(){
    int output = 0;
    for (int i=1; i<11; i++){
        output += testcase(i);
    }
    cout << 10*output;
}