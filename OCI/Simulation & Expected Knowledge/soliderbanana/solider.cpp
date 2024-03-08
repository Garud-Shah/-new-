#include <iostream>
using namespace std;
int main(){
    freopen("sb.in","r",stdin);
    freopen("sb.out","w",stdout);
    int bananacost, intialmoney, bananawant;
    cin >> bananacost;
    cin >> intialmoney;
    cin >> bananawant;
    int totalmoney = bananacost * bananawant * (bananawant + 1)/2;
    int needmoney = totalmoney - intialmoney;
    if (needmoney > 0){
        cout << needmoney;
    } else {
        cout << 0;
    }
}