#include <iostream>
#include "Wizard.hpp"

using namespace std;



        wizard::wizard (string name, string element, int level, int maxMp) : name(name), element(element), level(level), maxMp(maxMp), mp(maxMp) {}



string wizard::displayInfo() {
    string info = "\nName: " + name + "\nElement: " + element + "\nLevel: " + to_string(level) + "\nMP: " + to_string(mp) + "\n";
    return info;

}

void wizard::castSpell(wizard &target, int damage) {
    if (target.mp >= damage){
        target.mp -= damage; 
    } else {
        target.mp = 0;
    }
}

void wizard::recharge() {
    mp = maxMp;
}

