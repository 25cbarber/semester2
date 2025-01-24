#include <iostream>
#include "Wizard.hpp"

using namespace std;

int main() { 
    string choice;
    cout << "what is your wizards name?: " << endl;
    cin >> choice;

    wizard obj1(choice, "fire", 10, 100);
    string wizardInfo = obj1.displayInfo();
    cout << wizardInfo << endl;

    cout << "what is another name?: " << endl;
    cin >> choice;

    wizard obj2(choice, "water", 20, 90);
    wizardInfo = obj2.displayInfo();
    cout << wizardInfo << endl;

    obj2.castSpell(damage);
    cout << wizardInfo << endl;
    obj2.recharge();
    cout << wizardInfo << endl;





    return 0;
}