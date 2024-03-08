#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<string, int> value = {};
map<string, string> nameyears = {};
// year differnce for inputting
int eval(int sign, string year1, string year2){
    vector<string> yearstrings = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    map<string,int> years = {};
    for (int i=0; i<12; i++){
        years[yearstrings[i]]=i;
    }
    int original = years[year1] - years[year2];
    if (original/sign > 0){
        return original;
    } else {
        if (sign == 1){
            return 12+original;
        } else {
            return original-12;
        }
    }
}
int main(){
    value ["Bessie"] = 0;
    nameyears ["Bessie"] = "Ox";
    int N;
    cin >> N;
    //whole mess for inputting since each line has a lot of data
    for (int i=0; i<N; i++){
        string newname;
        cin >> newname;
        value[newname] = {};
        string waste;
        cin >> waste >> waste;
        string oldsign;
        cin >> oldsign;
        int fixsign;
        if (oldsign == "previous"){
            fixsign = -1;
        } else {
            fixsign = 1;
        }
        string year;
        cin >> year;
        cin >> waste >> waste;
        string oldname;
        cin >> oldname;
        nameyears[newname] = year;
        value[newname]= eval(fixsign,year,nameyears[oldname]) + value[oldname];
    }
    cout << abs(value["Elsie"]);
}