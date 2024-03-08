#include <iostream>
using namespace std;
#include <vector>
int main(){
    freopen("9.in","r",stdin);
    freopen("blist.out","w",stdout);
    int N;
    cin >> N;
    int answer=0;
    vector<int> startingtimes = {};
    vector<int> endingtimes = {};
    vector<int> milkamts = {};
    for (int cow=0; cow<N; cow++){
        int a,b,c;
        cin >> a >> b >> c;
        startingtimes.push_back(a);
        endingtimes.push_back(b);
        milkamts.push_back(c);
    }
    
    for (int time =0; time< 1000; time++){
        int valuesum = 0;
        for (int cow=0; cow< N; cow++){
            if((time >= startingtimes[cow]) && (time <= endingtimes[cow])){
                valuesum += milkamts[cow];
            }
    
        answer = max(valuesum,answer);
        }
    }
    cout << answer;
}