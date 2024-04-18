#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> points_x = {};
    vector<int> points_y = {};
    int N; cin >> N;
    for (int i=0; i<N; i++){
        pair<int,int> mypair;
        cin >> mypair.first >> mypair.second;
        points_x.push_back(mypair.first);
        points_y.push_back(mypair.second);
    }   
    sort(points_x.begin(), points_x.end());
    sort(points_y.begin(), points_y.end());
}