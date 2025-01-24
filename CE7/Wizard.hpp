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
    string info = "Name: " + name + "\nelement: " + element + "\nLevel: " + to_string(level) + "\nMP: " + to_string(mp);
    return info;

}

void castSpell(int damage) {
    if (mp >= damage){
    mp = mp - damage; 
    } else {
        mp = 0;
    }
}

void recharge() {
    mp = maxMp;
}

};