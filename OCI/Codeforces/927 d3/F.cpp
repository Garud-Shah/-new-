#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int m; cin >> m >> m;
        map<int,int> cats_endtostart = {};
        map<int,int> cats_starttoend = {};
        for (int j=0; j<m; j++){
            int start; cin >> start;
            int end; cin >> end;
            // START Condition
            if (cats_starttoend.find(start) == cats_starttoend.end()){
                if (cats_endtostart.find(end) == cats_starttoend.end()){
                    cats_endtostart[end] = start;
                    cats_starttoend[start] = end;
                } else {
                    
                    // cats_endtostart[end] = max(cats_endtostart[end],start);
                    // if (cats_endtostart[end] == start){
                    //     cats_starttoend[start] = end;
                    // } else {
                    //     cats_starttoend[cats_endtostart[end]] = min(end, cats_starttoend[cats_endtostart[end]]);
                    //     cats_endtostart.erase(max(end, cats_starttoend[cats_endtostart[end]]));
                    // }
                }
            } else {
                if (cats_endtostart.find(end) == cats_starttoend.end()){
                    cats_endtostart[end] = start;
                    
                }
            }
        }
        while (cats_endtostart.size() > 0){
            // move 
            // remove
            set<int> remove = {};
            for (auto i: cats_starttoend){

            }
        }
    }
}