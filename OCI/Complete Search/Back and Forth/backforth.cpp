#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> barn1 = {};
vector<int> barn2 = {};
vector<int> searchout(int iter, int start, int cval){
    vector<int> output = {};
    if (iter==0){
        return {cval};
    }
    if (start==0){
        for (int i=0; i<barn1.size(); i++){            
            barn2.push_back(barn1[i]);
            barn1.erase(barn1.begin()+i);
            for (auto k: searchout(iter-1,(start+1)%2,cval-barn1[i])){
                output.push_back(k-barn1[i]);
            }
        }
    }
    if (start==1){
        for (int i=0; i<barn2.size(); i++){            
            barn1.push_back(barn2[i]);
            barn2.erase(barn2.begin()+i);
            for (auto k: searchout(iter-1,(start+1)%2,cval+barn2[i])){
                output.push_back(k+barn2[i]);
            }
        }
    }
    return output;
}
int main(){
    freopen("1.in","r",stdin);
    freopen("backforth.out","w",stdout);

    for (int i=0;i<10;i++){
        int input;
        cin >> input;
        barn1.push_back(input);
    }
    for (int i=0;i<10;i++){
        int input;
        cin >> input;
        barn2.push_back(input);
    }
    vector<int> finaloutput = searchout(4,0,1000);
    sort(finaloutput.begin(), finaloutput.end()); 
    int encounterprevious=0;
    int tally = 0;
    for (int i=0; i<finaloutput.size(); i++){        
        if (finaloutput[i] != encounterprevious){
            tally++;
        }
        encounterprevious = finaloutput[i];
    }
    cout << tally;
}