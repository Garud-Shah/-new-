#include <iostream>
using namespace std;
string twodigitstring(int integer){
    if (integer < 10){
        char my_char = '0' + integer;
        string mystr = "00";
        mystr[1] = my_char;
        return mystr;
    } else {
        char my_char_0 = '0' + integer % 10;
        char my_char_1 = '0' + (integer - integer % 10)/10;
        string mystr = "XX";
        mystr[0] = my_char_1;
        mystr[1] = my_char_0;
        return mystr;
    }
}
int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        string input; cin >> input;
        int input_hours = 10 * (input[0] - '0') + (input[1] - '0');
        int input_minutes = 10 * (input[3] - '0') + (input[4] - '2') + 2;
        if (input_hours == 0){
            cout << "12:" << twodigitstring(input_minutes) << " AM";
        } else if (input_hours < 12){
            cout << twodigitstring(input_hours) << ":" << twodigitstring(input_minutes) << " AM";
        } else if (input_hours == 12) {
            cout << "12:" << twodigitstring(input_minutes) << " PM";
        } else {
            cout << twodigitstring(input_hours - 12) << ":" << twodigitstring(input_minutes) << " PM";
        }
        cout << endl;
    }
}