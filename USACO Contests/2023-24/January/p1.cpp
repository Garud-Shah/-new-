#include <iostream>
#include <fstream>
#include <set>
using namespace std;
void testcase(){
    set<int> numbers = {};
    int previous = 0;
    int pprevious = 0;
    int current = 0;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        pprevious = previous;
        previous = current;
        cin >> current;
        if (previous == current){
            numbers.insert(current);
        } else if (pprevious == current){
            numbers.insert(current);
        }
    }
    int number = 0;
    int setsize = numbers.size();
    for (auto i: numbers){
        cout << i;
        number++;
        if (number != setsize){
            cout << " ";
        }
    }
    if (setsize == 0){
        cout << "-1";
    }
}
int main(){
    int t; 
    cin >> t;
    for (int i=0; i<t; i++){
        testcase();
        cout << endl;
    }
}