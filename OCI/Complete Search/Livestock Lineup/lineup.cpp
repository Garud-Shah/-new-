#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int> numbers = {};
vector<pair<int,int>> condititons = {};
bool check(){
    int number = condititons.size();
    for (int i=0; i<7; i++){
        pair<int,int> numberspaira = {numbers[i], numbers[i+1]};
        pair<int,int> numberspairb = {numbers[i+1], numbers[i]};
        for (auto i: condititons){
            if ((i == numberspaira) || (i == numberspairb)){
                number--;
                break;
            }
        }
    }
    return (number == 0);
}
bool permuation(int number){
    bool work = false;
    for (int i=0; i<(9-number); i++){
        numbers.insert(numbers.begin()+i,number);
        if (number != 0){
            work = permuation(number-1);
        } else {
            work = check();
        } 
        if (work){
            return true;
        }
        numbers.erase(numbers.begin() + i);
    }
    return false;
}
int main(){
    vector<string> names = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(names.begin(),names.end());
    map<string,int> fix = {};
    for (int i=0; i<8; i++){
        fix[names[i]] = i;
    }
    int N;
    cin >> N;    
    for (int i=0; i<N; i++){
        string input1;
        string dummy;
        string input2;
        cin >> input1;
        cin >> dummy >> dummy >> dummy;
        cin >> input2;
        condititons.push_back({fix[input1],fix[input2]});
    }    
    permuation(8);
    for (int i=0; i<8; i++){
        cout << names[numbers[i]] << endl;
    }
}
