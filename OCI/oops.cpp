#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> input = {};
    int previousinputting = 0;
    int add = 0;
    int fail = 0;
    while (true){
        int add;
        previousinputting = add;
        cin >> add;
        input.push_back(add);
        if (previousinputting > add){
            fail = add;
            break;
        }
    }
    int newstart = -1;
    while (true){
        if (input[newstart] <= fail){
            newstart++;
        } else {
            break;
        }
    }
    int previousans = fail;
    int insize = input.size();
    int answer = 0;
    for (int i = newstart; i < insize; i++){
        if (previousans != input[i]){
            answer++;
        }
    }
    cout << answer;
}