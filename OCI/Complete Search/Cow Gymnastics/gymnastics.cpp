#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rankings = {};
int N,K;
int ranker(int cow, int round){
    for (int i=0; i<N; i++){
        if (rankings[round][i] == cow){
            return i;
        }
    }
}
bool wins(int cow1, int cow2, int round){
    return (ranker(cow1,round) < ranker(cow2,round));
}
int always(int cow1, int cow2){
    int total = 0;
    for (int i=0; i<K; i++){
        total += wins(cow1, cow2, i);
    }
    return total;
}
int main(){
    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);   
    cin >> K;
    cin >> N;
    for (int i=0;i<K;i++){
        vector<int> push = {};
        for (int j=0; j<N; j++){
            int input;
            cin >> input;
            push.push_back(input);
        }
        rankings.push_back(push);
    }
    int pairs = 0;
    for (int i=1;i<=N;i++){
        for (int j=1;i<=N;i++){
            pairs+=(always(i,j)==K);
        }
    }
    cout << pairs;
}