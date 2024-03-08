#include <iostream>
using namespace std;
int main(){
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int bucket1, bucket2, bigbucket;
    cin >> bucket1 >> bucket2 >> bigbucket;
    int remainder = bigbucket % bucket1;
    int timeleft = (bigbucket - remainder)/bucket1;
    int maxremainder = remainder;
    for (; timeleft >= 0; timeleft--){
        if (bucket2 < remainder){
            remainder %= bucket2;
        }
        maxremainder = min(remainder,maxremainder);
        if (bucket2 == remainder) {
            cout << bigbucket; return 0;
        } else {
            remainder += bucket1;
        }
    }
    cout << (bigbucket - maxremainder); return 0;
}