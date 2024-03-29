#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> cows, beside_a, beside_b, answer;
int N;
// finds position in "COWS"
int where(string c){
    for (int i=0; i<answer.size(); i++)
        if (answer[i]==c) return i;
    return 999;
}
// checks if a cow can go first
bool can_go_first(string c){
    int n = answer.size(), nbrs=0;
    if (where(c)!=999) return false;
    // checks whether it would need to satisfy 2 new conditions after 
    // being first  => impossible (can't be first)
        for (int i=0; i<N; i++) {
            // increments for a condition
            if (beside_a[i] == c && 
                where(beside_b[i]) == 999){
                    nbrs++;
                }
            if (beside_b[i] == c && 
                where(beside_a[i]) == 999){
                    nbrs++;
                }
        }
        // false if 2 conditions
        if (nbrs == 2) return false;



    if (n>0) {
        // checks the last cow
        string last_cow = answer[n-1];
        for (int i=0; i<N; i++) {
            // checks if a cow is "forced" to be first in line, by checking if
            // it doesn't need to be next to the last cow and it's not in the list
            if (beside_a[i] == last_cow 
            &&  where(beside_b[i]) == 999 
            &&  beside_b[i] != c) 
                return false;
            
            if (beside_b[i] == last_cow 
            &&  where(beside_a[i]) == 999 
            &&  beside_a[i] != c) 
                return false;
        }
    }
    return true;
}
 
int main(void){
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    cin >> N;
    cows.push_back("Beatrice");
    cows.push_back("Belinda");
    cows.push_back("Bella");
    cows.push_back("Bessie"); cows.push_back("Betsy"); cows.push_back("Blue"); cows.push_back("Buttercup"); cows.push_back("Sue");
    string a, b, t;
    for (int i=0; i<N; i++) {
        cin >> a;
        cin >> t >> t >> t >> t;
        cin >> b;
        beside_a.push_back(a);
        beside_b.push_back(b);
    }
    // makes a cow first if it can go first
    for (int i=0; i<8; i++) {
        int next_cow = 0;
        while (!can_go_first(cows[next_cow])) next_cow++;
        answer.push_back(cows[next_cow]);
        cout << cows[next_cow] << "\n";
    }
    return 0;
}