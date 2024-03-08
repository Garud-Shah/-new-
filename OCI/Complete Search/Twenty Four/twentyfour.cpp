#include <iostream>
#include <vector>
using namespace std;
vector<int> permutationvector = {};
int eval = 0;
int maxnumber = 4;
vector<int> permutationfix = {};
void evalutationpostfix(int iterations){
    if ((iterations == 0) && (permutationfix[0] <= 24)){
        eval = max(eval,permutationfix[0]);
    } else {
        int first_number = *(permutationvector.end()-1);
        int second_number = *(permutationvector.end()-2);
        permutationfix.pop_back(); permutationfix.pop_back();
        for (int i=0; i<4; i++){
            if (i==0) permutationfix.push_back(first_number+second_number);
            if (i==1) permutationfix.push_back(first_number-second_number);
            if (i==2) permutationfix.push_back(first_number*second_number);
            if (first_number%second_number==0) if (i==3) permutationfix.push_back(first_number/second_number);
            evalutationpostfix(iterations-1);
        }
    }
}
int permutations(vector<int> things, int depth){
    if (depth == maxnumber){
        permutationfix = permutationvector;
        evalutationpostfix(maxnumber);
        return 0;
    }
    for (int i=0; i<depth; i++){
        permutationvector.insert(
            permutationvector.begin()+i
            ,things[depth]);
    }
    return 0;
}
void test(){
    vector<int> things = {};
    for (int i=0; i<maxnumber; i++){
        int input; cin >> input;
        things.push_back(input+'0');
    }
    permutations(things,0);
    cout << eval;
}
int main(){
    int N;
    cin >> N; 
    for (int i=0; i<N-1; i++){
        test();
        cout<< endl;
    }
    test();;
}