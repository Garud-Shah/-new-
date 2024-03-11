#include <iostream>
#include <vector>
using namespace std;
vector<int> rankings = {};
int N,K;
int ranker(int cow, int round){
    for (int i = round*N; i<(round+1)*N; i++){
        if (rankings[i]==cow){
            return (i - round*N);
        }
    }
    return 0;
}
bool wins(int cow1, int cow2, int round){
    return (ranker(cow1,round) >= ranker(cow2,round));
}
bool always(int cow1, int cow2){
    for (int i=0; i<K; i++){
        if (wins(cow2,cow1,i)){
            return false;
        }
    }
    return true;
}
int main(){
    freopen("2.in","r",stdin);
    freopen("gymnastics.out","w",stdout);   
    cin >> N;
    cin >> K;
    for (int i=0;i<N*K;i++){
        int input;
        cin >> input;
        rankings.push_back(input);
    }
    int pairs = 0;
    for (int i=0;i<N;i++){
        for (int j=0;i<N;i++){
            pairs+=always(i,j);
        }
    }
    cout << pairs;
}