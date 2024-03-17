#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long long int evaluation(vector<long long> numbers){
    long long sum = 0;
    for (auto i:numbers){
        sum += abs(i);
    }
    return sum;
}

int main(){
    vector<long long int> numbers = {0};
    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        long long int input;
        cin >> input;
        numbers.push_back(input);
    }
    vector<long long int> numbersmod = {};
    vector<long long int> numbersmodbest = {};
    long long int evaluationprevious = 0xFFFFFFFFFFFFFFFF;
    int numberofloops = 0;
    while (evaluation(numbers) != 0){
        for (int i=1; i<=N; i++){
            for (int j=1; j<=i; j++){
                numbersmod[N-j]++;
            }
            int evaluationnow = evaluation(numbersmod);
            if (evaluationnow > evaluationprevious){
                break;
            } else {
                numbersmodbest = numbersmod;
            }
        }
        vector<long long int> numbersmod = numbers;
        for (int i=1; i<=N; i++){
            for (int j=1; j<=i; j++){
                numbersmod[N-j]++;
            }
            int evaluationnow = evaluation(numbersmod);
            if (evaluationnow > evaluationprevious){
                break;
            } else {
                numbersmodbest = numbersmod;
            }
        }
        numbers = numbersmodbest;
        numberofloops++;
    }
    cout << numberofloops;
}