#include <iostream>

using namespace std;

class wizard {

    public: 
        string name, element;
        int level, maxMp, mp;
        int damage = 10;

        wizard (string name, string element, int level, int maxMp) : name(name), element(element), level(level), maxMp(maxMp), mp(maxMp) {

        }



string displayInfo() {
    string info = "\nName: " + name + "\nElement: " + element + "\nLevel: " + to_string(level) + "\nMP: " + to_string(mp) + "\n";
    return info;

}

void castSpell(int damage) {
    if (mp >= damage){
        mp -= damage; 
    } else {
        mp = 0;
    }
}

void recharge() {
    mp = maxMp;
}

};