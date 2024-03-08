#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){
	int N;
	cin >> N;
	long long int maxpay[N];
	for (int i=0; i<N;i++){
		int input;
		cin >> input;
		maxpay[i]=input;
	}
	sort(maxpay,maxpay + N);
	int maxint= 0;
	long long int maxstuff = 0;
	for (int i=0; i<N;i++){
		int current = maxpay[i] * (N-i);
		int maxstuffold = maxstuff;
		maxstuff = max(maxstuff, current);
		if (maxstuffold != maxstuff){
			maxint = maxpay[i];
		}
	}
	cout << maxstuff << " " << maxint;
}