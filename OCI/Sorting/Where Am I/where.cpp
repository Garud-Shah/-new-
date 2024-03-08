#include <iostream>
#include <set>
using namespace std;
bool check(string word, int length){
    set<string> list = {};
    for (int i=0; i<=(word.size() - length); i++){
        string append;
        // for (int j=0; j< length; j++){
        //     append += string(word[i+j+1],0);
        //     cout << string(word[i+j+1],0) << endl;
        // }
        append = word.substr(i,length);
        int oldsize = list.size();
        list.insert(append);
        if (list.size()==oldsize){
            return 0;
        }
        // cout << append << endl << endl;
    }
    // cout<<((word.size() - length+1) == list.size());
    // return ((word.size() - length+1) == list.size());
    return 1;
}
int main(){
    int N;
    cin >> N;
    string colors;
    cin >> colors;
    for (int i=0; i<N;i++){
        if (check(colors,(i+1))){
            cout << (i+1);
            return 0;
        }
    }
    cout << "ERROR: Invalid.";
}