#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
map<int,map<int,int>> primefactorization = {};
vector<int> primes = {};
void dothework(int n){
    int temp = n;
    bool isprime = true;
    for (auto i: primes){
        primefactorization[n][i] = 0;
        while ((temp % i) == 0){
            primefactorization[n][i]++;
            isprime = false;
        }
    }
    if (isprime){
        primefactorization[n][n] = 1;
        primes.push_back(n);
    }
}
int main(){
    freopen("primelist", "w", stdout);
    for (int i=2; i<=3; i++){
        dothework(i);
    }
    cout << "{";
    for (auto i: primes){
        cout << i << ",";
    }
    cout << "}" << endl;
    cout << "{";
    for (auto i: primefactorization){
        cout << "{" << i.first << "," << "{";
        for (auto j: i.second){
            cout << "{" << j.first << "," << j.second << "}";
        }
        cout << "}";
    }
    cout << "}";
}