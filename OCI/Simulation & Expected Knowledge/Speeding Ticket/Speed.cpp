#include <iostream>
#include <vector>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("speed.out","w",stdout);
    int m,n;
    cin >> n >> m;
    vector<int> speed = {};
    vector<int> speedlim = {};
    int maxover = 0;
    for (int i=0;i<n;i++){
        int length, speedlimlocal;
        cin >> length >> speedlimlocal; 
        for (int j=0; j<length; j++){
            speedlim.push_back(speedlimlocal);
        }
    }
    for (int i=0;i<m;i++){
        int length, bessiespeed;
        cin >> length >> bessiespeed; 
        for (int j=0; j<length; j++){
            speed.push_back(bessiespeed);
        }
    }
    for (int i=0;i<100;i++){
        if (speed[i]>speedlim[i]){
            if((speed[i]-speedlim[i])>maxover){
                maxover = speed[i]-speedlim[i];
            }
        }
    }
    cout << maxover;
}