#include <iostream>
#include <vector>
using namespace std;
int minimum(vector<  int> list,int Length){
    int out = list[0];
    for (int i=1; i<Length; i++){
        if (out > list[i]){
            out = list[i];
        }
    }
    return out;
}
int maximum(vector<int> list,int Length){
    int out = list[0];
    for (int i=1; i<Length; i++){
        if (out < list[i]){
            out = list[i];
        }
    }
    return out;
}
int minimumindex(vector<int> list, int Length){
    int out = 0;
    for (int i=0; i<Length; i++){
        if (list[out] > list[i]){
            out = i;
        }
    }
    return out;
}

int main(){
    int a,b,c,d,e,f,g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    vector<int> mylist = {a,b,c,d,e,f,g};
    int A = minimum(mylist,7);
    mylist.erase(mylist.begin()+ minimumindex(mylist,7));
    int B = minimum(mylist,6);
    cout << B;
    int C;
    C = maximum(mylist,6)-A-B;
    cout << A << " " << B << " " << C;
}