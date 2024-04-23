#include <iostream>
using namespace std;
int ceilintdivision(int n, int k){
    int a = n % k;
    int nmod = n + (k-a);
    int output = nmod/k;
    return output;
}
int pow(int n, int exp){
    int product = 1;
    for (int i=0; i<exp; i++){
        product *= n;
    }
    return product;
}
int main(){
    int t; cin >> t;
    for (int num=0; num<t; num++){
        int base = 2;
        int n; cin >> n;
        int k; cin >> k;
        int index = 0;
        int numsbelow = 0;
        int previous = 0;
        int index = 0;
        for (int i=0; numsbelow < k; i++, index++){
            previous = numsbelow;
            numsbelow += ceilintdivision(n, pow(base,i+1));
        }
        int a = k - previous;
        int finalnum = (a*base + 1)*pow(base,index);
        cout << finalnum << endl;
    }
}