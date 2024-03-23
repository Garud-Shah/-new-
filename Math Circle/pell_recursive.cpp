#include <iostream>
using namespace std;
int main(){
    int a = 1; 
    int b = 0;
    for (int i=0; i<20; i++){
        cout << a << " " << b << endl;
        a = a + 2*b;
        b = a - b;
    }
}