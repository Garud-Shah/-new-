#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("tttt.out","w",stdout);
    vector<char> grid = {};
    for (int i=0;i<9;i++){
        char input;
        cin >> input;
        grid.push_back(input);
    }
    vector<vector<int>> wincondition = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    set<string> winners1 = {};
    set<string> winners2 = {};
    
    for (int i=0; i<8; i++){
        bool claim1 = grid[wincondition[i][0]] == grid[wincondition[i][1]];
        bool claim2 = grid[wincondition[i][1]] == grid[wincondition[i][2]];
        bool claim3 = grid[wincondition[i][0]] == grid[wincondition[i][3]];
        // int index = claim1 + claim2 + claim3;
        if (claim1 && claim2){
            int a = winners1.size();
            string str = string(1, grid[wincondition[i][0]]);
            cout << str;
            winners1.insert(str);
            cout << winners1.size();
        } else if (claim1){
            int a = winners2.size();
            string str;
            if (grid[wincondition[i][0]]>grid[wincondition[i][2]]){
                str = string(1, grid[wincondition[i][0]])+string(1, grid[wincondition[i][2]]);
                cout << "if claim1"<<  str << endl;
            } else {
                str = string(1, grid[wincondition[i][2]])+string(1, grid[wincondition[i][0]]);
                cout << "else claim1" << str << endl;
            }
            winners2.insert(str);
            cout << winners2.size();
        }  else if (claim2){
            int a = winners2.size();
            string str;
            if (grid[wincondition[i][0]]>grid[wincondition[i][2]]){
                str = string(1, grid[wincondition[i][0]])+string(1, grid[wincondition[i][2]]);
                cout << "if claim2" << str << endl;
            } else {
                str = string(1, grid[wincondition[i][2]])+string(1, grid[wincondition[i][0]]);
                cout << "else claim2" << str << endl;
            }
            winners2.insert(str);
            cout  << winners2.size() << endl;
        } else if (claim3){
            int a = winners2.size();
            string str;
            if (grid[wincondition[i][1]]>grid[wincondition[i][2]]){
                str = string(1, grid[wincondition[i][1]])+string(1, grid[wincondition[i][2]]);
                cout << "if claim3" << str << endl;
            } else {
                str = string(1, grid[wincondition[i][2]])+string(1, grid[wincondition[i][1]]);
                cout << "else claim3" << str << endl;
            }
            winners2.insert(str);
            cout  << winners2.size() << endl;
        }
    }
    cout << "Final Output" << endl;
    cout << winners1.size() << endl;
    cout << winners2.size() << endl;
}
