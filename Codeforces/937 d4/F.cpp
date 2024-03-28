#include <iostream>
using namespace std;
int log_2_ceil(int a){
    int number = 1;
    int count = 0;
    while (a < number){
        number *= 2;
        count++;
    }
    return count;
}
int ceil_divide(int number, int divideby){
    int residue = number % divideby;
    if (residue == 0){
        return number/divideby;
    } else {
        int num_fix = number - residue + divideby;
        return num_fix/divideby;
    }
}
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int a, b, c; cin >> a >> b >> c;
        int children_delta = a - c + 1;
        if (children_delta != 0){
            cout << -1 << endl;
        } else {
            int two_binary_tree = log_2_ceil(a);
            int one_dropping = ceil_divide(b, ceil_divide(a, 2));
            int total = two_binary_tree + one_dropping + 1;
            cout << total << endl;
        }
    }
}