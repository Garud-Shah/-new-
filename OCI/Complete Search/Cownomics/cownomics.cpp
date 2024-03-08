#include <iostream>
#include <vector>
using namespace std;
bool check(vector<char> list1, vector<char> list2, int length,int index){
    for (int i=0; i<length; i++){
        for (int j=0; j<length; j++){
            if (list1[length*i + index]==list2[length*j + index]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    freopen("2.in","r",stdin);
    freopen("cownomics.out","w",stdout);
    int M,N;
    cin >> N >> M;
    vector<char> spotty = {};
    vector<char> notspotty = {};
    int output = 0;
    for (int i=0; i<M*N; i++){
        char input;
        cin >> input;
        spotty.push_back(input);
    }  
    for (int i=0; i<M*N; i++){
        char input;
        cin >> input;
        notspotty.push_back(input);
    } 
    for (int i=0; i<M; i++){
        output+=check(spotty,notspotty,N,i);
    }
    cout << output << "testing";
}