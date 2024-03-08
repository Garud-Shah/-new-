#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<int> maxpay = {};
	for (int i=0; i<N;i++){
		int input;
		cin >> input;
		maxpay.push_back(input);
	}
	sort(maxpay.begin(),maxpay.end());
	int maxint= 0;
	int maxstuff = 0;
	for (int i=0; i<N;i++){
		int current = maxpay[i] * i;
		int maxstuffold = maxstuff;
		maxstuff = max(maxstuff, current);
		if (maxstuffold != maxstuff){
			maxint = maxpay[i];
		}
	}
	cout << maxstuff << " " << maxint;
}