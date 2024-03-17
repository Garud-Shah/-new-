#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long int evaluation(vector<long long>& numbers) {
    long long sum = 0;
    for (auto i : numbers) {
        sum += abs(i);
    }
    return sum;
}

int main() {
    vector<long long int> numbers;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        long long int input;
        cin >> input;
        numbers.push_back(input);
    }

    long long int evaluationprevious = 0xFFFFFFFFFFFFFFFF;
    int numberofloops = 0;

    while (evaluation(numbers) != 0) {
        vector<long long int> numbersmodbest = numbers;

        for (int L = 1; L <= N; L++) {
            vector<long long int> numbersmod = numbers;

            for (int j = N - 1; j >= N - L; j--) {
                numbersmod[j] += (L - (N - 1 - j));
            }

            int evaluationnow = evaluation(numbersmod);
            if (evaluationnow < evaluationprevious) {
                evaluationprevious = evaluationnow;
                numbersmodbest = numbersmod;
            }
        }

        numbers = numbersmodbest;
        numberofloops++;
    }

    cout << numberofloops;
}