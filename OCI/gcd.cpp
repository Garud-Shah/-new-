#include <iostream>
using namespace std;
int main(){
	cout<<"WELCOME TO THE GCD CALCULATOR"<< endl;
	cout<<"ENTER 2 NUMBERS"<< endl;
	long long int a,b;
	cout << "INTIAL NUMBERS ";
	cin >> a;
	cin >> b;
    cout << endl;
    cout << "SCANNING THRESHOLD (LARGER THAN 1)";
    float thers;
    cin >> thers;
	for (int i=1 ; (a > 0) && (b > 0); i++){
		if (b <= a){
			a = a % b;
		}
		if (a <= b){
			b = b % a;
		}
		cout <<"ITERATION " << i << ": " << a << " " << b << endl;
        if (max(a,b) >= thers*min(a,b)){
            cout << "JUMP";
            int n;
            for (int j=1; j<100000000; j++){
                n++;
            }
        }
        int n;
        for (int j=1; j<100000000; j++){
            n++;
        }
	}
	cout << "FINAL OUTPUT: " << max(a,b);
}