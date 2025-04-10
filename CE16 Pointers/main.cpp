#include <iostream>
#include "pointers.hpp"
using namespace std;

int main() {

    MagicalCreature* newCreature = new MagicalCreature("Bob", 20);

    cout << &newCreature << endl;

    cout << newCreature->displayInfo() + "\n" << endl;
    delete newCreature;

    MagicalCreature* creatureArray = new MagicalCreature[3]{
        MagicalCreature("Creature1", 25),
        MagicalCreature("Creature2", 30),
        MagicalCreature("Creature3", 35)
    };

    for (int i = 0; i < 3; i++) {
        cout << "Memory address: " << &creatureArray[i] << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "\n" + creatureArray[i].displayInfo() << endl;
    }

    delete[] creatureArray;

    return 0;


}