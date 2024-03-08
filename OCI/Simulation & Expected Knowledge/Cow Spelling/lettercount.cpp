#include <iostream>
#include <vector>
using namespace std;
vector<int> lettercount(string word, int length){
    vector<int> a = {};
    for (int i=0;i<26;i++){
        a.push_back(0);
    }
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int i=0;i<length;i++){
        for (int j=0; j<26; j++){
            if (alphabet[j]==word[i]){
                a[j]=a[j]+1;
            }
        }        
    }
    return a;
}
int main(){
    for (int i=0;i<26;i++){
        cout << lettercount("hello",5)[i];
    }
}
