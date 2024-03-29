#include <iostream>
using namespace std;
int main(){
    int a = 1; 
    int b = 0;
    for (int i=0; i<200; i++){
        cout << "Numbers: " << a << " " << b << endl;
        a = a + 2*b;
        b = a - b;
        double bnew = b;
        double approx = a/bnew;
        cout << "Root 2 Approximation: " << approx << endl;
    }
}
