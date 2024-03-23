#include <iostream>
#include <set>
#include <vector>
using namespace std;
set<int> possible_answers;
void friday(int barn_1milk, vector<int> barn_1, vector<int> barn_2){
    for (int i=0; i<barn_2.size(); i++) {
        int x = barn_2[i];
        possible_answers.insert(barn_1milk + x); // record this value as possible
    }
}
void thursday(int barn_1milk, vector<int> barn_1, vector<int> barn_2){
    for (int i=0; i<barn_1.size(); i++) {
        int x = barn_1[i];
        vector<int> new_barn_2 = barn_2; new_barn_2.push_back(x);
        vector<int> new_barn_1 = barn_1; new_barn_1.erase(new_barn_1.begin() + i);
        friday(barn_1milk - x, new_barn_1, new_barn_2);
    }
}
void wednesday(int barn_1milk, vector<int> barn_1, vector<int> barn_2){
    for (int i=0; i<barn_2.size(); i++) {
        int x = barn_2[i];
        vector<int> new_barn_1 = barn_1; new_barn_1.push_back(x);
        vector<int> new_barn_2 = barn_2; new_barn_2.erase(new_barn_2.begin() + i);
        thursday(barn_1milk + x, new_barn_1, new_barn_2);
    }
}
void tuesday(int barn_1milk, vector<int> barn_1, vector<int> barn_2){
    for (int i=0; i<barn_1.size(); i++) {
        int x = barn_1[i];
        vector<int> new_barn_2 = barn_2; new_barn_2.push_back(x);
        vector<int> new_barn_1 = barn_1; new_barn_1.erase(new_barn_1.begin() + i);
        wednesday(barn_1milk - x, new_barn_1, new_barn_2);
    }
}
int main() {
    int n, answer = 0;
    vector<int> barn_1 = {};
    vector<int> barn_2 = {};
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    for (int i=0; i<10; i++) { 
        cin >> n; 
        barn_1.push_back(n); 
    }
    for (int i=0; i<10; i++) { 
        cin >> n; 
        barn_2.push_back(n); 
    }
    tuesday(1000, barn_1, barn_2);
    cout << answer << "\n";
}
