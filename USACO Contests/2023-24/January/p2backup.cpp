#include <iostream>
#include <vector>
using namespace std;
class Object {
    private:
        bool istarget;        
        int number;
        bool istriggered = false;
    public:
        bool isthistarget(){
            return istarget;
        }   
        bool getnumber(){
            return number;
        }
        void settarget(){
            cin >> istarget;
        }
        void setnumber(){
            cin >> number;
        }
        void toggle(){
            istriggered = true;
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
        void setlocation(){
            cin >> location;
        }
        void setover(){
            cin >> isover;
        }
        int getsize(){
            return isover;
        }
        int getlocation(){
            return (location - 1);
        }
        void interact(Object &object){
            if (object.isthistarget()){ 
                if (!object.istoggled()) {
                    if (abs(power) >= object.getnumber()){
                        numberbroken++;
                    }                        
                }                                
            } else {
                power += object.getnumber();
                power *= -1;
                numberbroken--;
            }
            location += power;
            object.toggle();
        }
        bool termination_check(){
            if ((location>=isover)|| (location <= 0)){
                return false;
            }
            return true; 
        }
};

int main(){
    int runningtotal=0;
    Bessie bessie;
    bessie.setover();
    bessie.setlocation();
    int size = bessie.getsize();
    vector<Object> objects = {};
    for (int i=0; i<size; i++){
        Object input;
        input.settarget();
        input.setnumber();
        objects.push_back(input);
    }
    while (bessie.termination_check()){
        int index = bessie.getlocation();
        bessie.interact(objects[index]);
    }
    cout << bessie.numberbrokenextract();
}