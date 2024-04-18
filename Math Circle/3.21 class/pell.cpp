#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int kmax = 1000000;
    int k = 1;
    long long int x = 2;
    int amin = 0; int bmin = 0;
    for (long long int a=amin; a<kmax; a++){
        for (long long int b=bmin; b<=a; b++){
            if (abs(a*a - x*b*b) == 1){
                cout << a << " " << b << endl;
                amin = a;
                bmin = b;
            }
        }
    }
}