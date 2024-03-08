#include <iostream>
using namespace std;
int intdivision(int n, int k){
    int a = n % k;
    int nmod = n - a;
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
int nchoose2(int n){
    return n*(n-1)/2;
}
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int delta = 1;
        int sum = 0;
        int n; cin >> n;
        int base = 10;
        int previousdigits = 0;
        for (int j=0; delta != 0; j++){
            int power = pow(base, j);
            // computing the 'delta' diffrences from main sum_i=0^infty floor(n/10^k) * 10^k * (10 C 2) formuala
                int currdigit = intdivision(n - previousdigits, power) % base;
                // small delta computation
                    sum += previousdigits * currdigit * power;
                    // for next time
                    previousdigits += power*currdigit;
                // big delta compuation
                    int leftC2 = nchoose2(currdigit-1);
                    sum += leftC2 * power;
            // main sum_k=0^infty floor(n/10^k) * 10^k * (10 C 2) formuala
                int baseC2 = nchoose2(base);
                int number = power * intdivision(n, power);
                sum += baseC2 * number;
        }
        cout << sum << endl;
    }
}