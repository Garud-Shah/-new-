#include <iostream>
#include <vector>
using namespace std;
int completesearch(vector<int> modclassnumber,int index,int lenminus,int currentsum){
    vector<int> inverse = {1,4,5,2,3,6};
    int out = 100;
    if (index==5){
        int a = currentsum % 7;
        if (modclassnumber[5]<a){
            return 100;
        } else {
            return a;
        }
    }
    if (modclassnumber[index]==0){
        return completesearch(modclassnumber,index+1,lenminus,currentsum);
    } else {
        for (int i=0; i<modclassnumber[index]; i++){
            int k=completesearch(modclassnumber,index+1,lenminus,currentsum+inverse[index]*i+1);
            if (out > k){
                out=k;
            }
        }
    }
    return out;
}
int main(){
    int n;
    cin >> n;
    vector<int> modclassnumber = {0,0,0,0,0,0};
    // Inputting
    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        int mod=a%7 - 1;
        if (mod ==-1){
            continue;
        } else {
            if (modclassnumber[mod]==7){
                continue;
            } else {
                modclassnumber[mod]+=1;
            }
        }
    }
    int out = n-completesearch(modclassnumber,0,0,0);
    cout << out;
}