    #include <iostream>
    #include <vector>
    using namespace std;
    string text;
    vector<string> texttowordlist(){;
        vector<string> output{};
        int N = text.length();
        string word = "";
        for (int i=0; i<N; i++){
            char k = text[i];
            if (k==' '){
                output.push_back(word);
                word = "";
            }
            else{
                word = word + k;
            }
        }
        return output;
    }

    int main(){
        freopen("word.in", "r", stdin);
        freopen("word.out", "w", stdout);
        int n;
        cin >> n;
        int k;
        cin >> k;
        cin >> text;
        vector<string> list=texttowordlist();
        int charnumber=0;
        for (int i=0; i<n; i++){
            string element;
            cin >> element;
            charnumber += element.length();
            if (charnumber >k){
                cout << "/n";
                charnumber=0;
            }
            cout << element;
            cout << " ";
        }
    }