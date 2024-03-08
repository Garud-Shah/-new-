#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define entrytime first
#define processing second
bool cmp(const pair<int,int> &x, const pair<int,int> &y) { 
    return x.first < y.first; 
}
int main(){
    // Inputting
    int N;
    cin >> N;
    vector<pair<int,int>> cows = {};
    for (int i=0;i<N;i++){
        int entry, process;
        cin >> entry >> process;
        cows.push_back({entry,process});
    }
    sort(cows.begin(),cows.end(), cmp);
    int currently_processing = 0;
    int processing_time_left = 0;
    for (int time=0; time<1000000; time++){
        if (currently_processing ==  N+1){
            cout << time;
            return 0;
        }
        if ((processing_time_left == 0) && (time == cows[currently_processing+1].processing)){
            currently_processing++;
            processing_time_left = cows[currently_processing].entrytime;
            continue;
        }
        processing_time_left--;
    }
    cout << 1000000;
}