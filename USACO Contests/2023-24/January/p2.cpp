#include <iostream>
#include <vector>
using namespace std;
class Object {
    private:
        bool istarget;        
        int number;
        bool istriggered;
    public:
        bool isthistarget(){
            return istarget;
        }   
        bool getnumber(){
            return number;
        }
        void settarget(int in){
            istarget = in;
        }
        void setnumber(int in){
            number = in;
        }
        void initialize(){
            istriggered = true;
        }
        void toggle(){
            istriggered = false;
        }
        bool istoggled(){
            return istriggered;
        }
};
class Bessie {
    private: 
        int numberbroken = 0;
        int power = 1;
        int location = 0;
        int isover = 0;
    public:
        int numberbrokenextract(){
            return numberbroken;
        }
        void setlocation(int in){
            location = in-1;
        }
        void setover(int in){
            isover = in;
        }
        int getsize(){
            return isover;
        }
        int getlocation(){
            return (location);
        }
        void interact(Object object){
            // cout << location << " " << numberbroken << endl;
            if (object.isthistarget()){ 
                // cout <<  "A " << location << " " << numberbroken << endl;
                if (abs(power) >= object.getnumber()) {
                    // cout <<  "A " << location << " " << numberbroken << object.getnumber() << endl;
                    if (object.istoggled()){                        
                        numberbroken++;
                        // cout <<  "A " << location << " " << numberbroken << endl;
                    }       
                }                                
            } else {
                // cout <<  "B " << location << " " << numberbroken << endl;
                power += (power/abs(power)) * object.getnumber();
                power *= -1;
                // cout <<  "B " << location << " " << numberbroken << endl;
            }
            location += power;
            // cout <<  location << " " << numberbroken << endl;
            object.toggle();
            // cout <<  location << " " << numberbroken << endl;
        }
        bool termination_check(){
            if ((location>=isover)|| (location < 0)){
                return false;
            }
            return true; 
        }
};
int main(){
    Bessie bessie;
    int temp; cin >> temp;
    bessie.setover(temp);
    cin >> temp;
    bessie.setlocation(temp);
    int size = bessie.getsize();
    vector<Object> objects = {};
    for (int i=0; i<size; i++){
        Object input;
        int temp; cin >> temp;
        input.settarget(temp);
        cin >> temp;
        input.setnumber(temp);
        input.initialize();
        objects.push_back(input);
    }
    int k=0;
    while (bessie.termination_check()){
        int index = bessie.getlocation();
        Object interacting = objects[index];
        bessie.interact(interacting);        
        if (k>1000000){
            break;
        }
    }
    cout << bessie.numberbrokenextract();
}