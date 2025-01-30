#include <iostream>
#include "WildMagicWizard.hpp"
#include "FireWizard.hpp"

using namespace std;

int main() { 
    string choice;

    wizard testdummy("dummy", "fire", 100, 100);

    cout << "what is your wizards name?: " << endl;
    cin >> choice;

    wildmagicwizard wildwizard(choice, "water", 20, 100, 50);
    cout << wildwizard.displayInfo() << endl;
    wildwizard.specialAbility();
    wildwizard.castSpell(testdummy, 10);
    cout << testdummy.displayInfo() << endl;

    cout << "what is another name?: " << endl;
    cin >> choice;

    firewizard fywy(choice, "fire", 10, 90);
    cout << fywy.displayInfo() << endl;
    fywy.specialAbility();
    fywy.castSpell(testdummy, 10);


    // wizard obj1(choice, "fire", 10, 100);
    // string wizardInfo = obj1.displayInfo();
    // cout << wizardInfo << endl;

    // cout << "what is another name?: " << endl;
    // cin >> choice;
 

    // wizard obj2(choice, "water", 20, 90);
    // wizardInfo = obj2.displayInfo();
    // cout << wizardInfo << endl;

    // obj1.castSpell(obj2, 10);
    // cout << obj2.displayInfo() << endl;
    // obj2.recharge();
    // cout << obj2.displayInfo() << endl;





    return 0;
}