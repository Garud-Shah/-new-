#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
class rooted_tree {
    public:
        int headid;
        map<int, set<int>> vertices;
        void add_tree(rooted_tree tree, int add_to){
            for (auto i: tree.vertices){
                vertices[i.first] = i.second;
            }
            vertices[add_to].insert(tree.headid);
        }
        vector<int> get_all_id(){
            vector<int> output;
            for (auto i: vertices){
                output.push_back(i.first);
            }
            return output;
        }
};
void query_round(map<int, rooted_tree> &trees){
    int two;
    int one;
    bool olddata;
    int zero;
    int num = 0;
    for (auto i: trees){
        if (num == 0){
            two = i.first;
            num = 1;
            continue;
        } else if (num == 1){
            one = i.first;
            cout << "? " << one << " " << two << endl;
            string strin; cin >> strin;
            if (strin == "YES"){
                trees[one].add_tree(trees[two], trees[one].headid);
                two = one;
            } else {
                num = 2;
            }
        } else {
            zero = i.first;
            cout << "? " << zero << " " << one << endl;
            string strin; cin >> strin;
            if (strin == "YES"){
                trees[zero].add_tree(trees[one], trees[zero].headid);
                two = one;
            } else {
                num = 1;
                trees[zero].add_tree(trees[two], trees[zero].headid);
                two = zero;
            }
        }
    }
    
}
void testcase(){
    map<int, rooted_tree> trees = {};
    int v; cin >> v;
    int edg; cin >> edg;
    for (int i=v; i>0; i--){
        rooted_tree tree;
        tree.headid = i;
        tree.vertices[i] = {};
        trees[i] = tree;
    }
    while (trees.size() > 2){
        query_round(trees);
    }
    vector<int> ids = trees[v].get_all_id();
    int ctr = 0;
    for (int i=1; i<v; i++){
        if (ids[ctr] == i){
            cout << 1 << " ";
            ctr++;
        } else {
            cout << 0 << " ";
        }
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        testcase();
    }
}