#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> greaterlist = {};
    set<int> lesslist = {};
    for (int i=0; i<n; i++){
        char gorl; cin >> gorl;
        int locsay; cin >> locsay;
        if (gorl == 'G'){
            greaterlist.insert(locsay);
        } else {
            lesslist.insert(locsay);
        }
    }
    int total = lesslist.size();
    int currtotal = lesslist.size();
    int lessnumber;
    for (auto i: lesslist){
        lessnumber = i;
        break;
    }
    int lastnumber;
    for (auto i: lesslist){
        lastnumber = i;
    }
    for (auto i: greaterlist){
        currtotal++;
        if (i >= lastnumber){
            int thesize = greaterlist.size();
            total = max(total, thesize);
            break;
        } else {
            for (auto j: lesslist){
                if (j <= i){
                    if (j > lessnumber){
                        lessnumber = j;
                        currtotal--;
                    }
                } else {
                    break;
                }
            }
        }
    }
    cout << (n - total);
}