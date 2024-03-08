#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> list,int x){
    for (int i=0;i<x;i++){
        cout << list[i] << endl;
    }
}
vector<int> lettercount(string word, int length){
    vector<int> a = {};
    for (int i=0;i<26;i++){
        a.push_back(0);
    }
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int i=0;i<length;i++){
        for (int j=0; j<26; j++){
            if (alphabet[j]==word[i]){
                a[j]++;
            }
        }        
    }
    return a;
}
int main(){
    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);
    int n;
    cin >> n;
    string word1;
    string word2;
    vector<int> printout = {};
    for (int i=0;i<26;i++){
        printout.push_back(0);
    }
    for (int j=0; j < n; j++){
        cin >> word1;
        cin >> word2;
        int len1 = word1.length();
        int len2 = word2.length();
        vector<int> list1 = lettercount(word1, len1);
        vector<int> list2 = lettercount(word2, len2);
        for (int k=0; k<26; k++){
            printout[k]+= max(list1[k],list2[k]);
        }
    }
    print(printout,26);
}