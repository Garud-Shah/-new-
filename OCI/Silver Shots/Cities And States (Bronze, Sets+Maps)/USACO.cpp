// begin code
#include <iostream>
#include <map>
using namespace std;
int main() {
    // freopens, inputting n
    freopen("citystate.in", "r", stdin);
    freopen("citystate.out", "w", stdout);
    int n;
    cin >> n;
    // map to keep track of "count"
    map<string, long long> count;
    for (int i = 0; i < n; ++i) {
        // inputting city + state
        string city, state;
        cin >> city >> state;
        // checks "non=idential"
        if (city.substr(0, 2) != state) {
            // makes 'key' for city
            string key = city.substr(0, 2) + state;
            count[key]++;
        }
    }
    // ret counts for our answer
    long long ret = 0;
    // goes through all entries
    for (auto entry : count) {
        // checks for reversed substring
        string otherKey = entry.first.substr(2) + entry.first.substr(0, 2);
        // adds in, if 0, 0 is added so nothing happens
        ret += entry.second * count[otherKey];
    }
    // we double counted because AABB and BBAA would be counted twice, not once
    cout << ret / 2 << endl;
    return 0;
}
