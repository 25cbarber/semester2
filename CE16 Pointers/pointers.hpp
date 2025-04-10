#include <iostream>
#include <string>

using namespace std;

class MagicalCreature {

    private:
        string name;
        int powerLevel;

    public:

        MagicalCreature() : name("Jimmy"), powerLevel(15) {}

        MagicalCreature(string name, int powerLevel) : name(name), powerLevel(powerLevel) {}

        string displayInfo() {

            return "Name: " + name + "\nPower Level: " + to_string(powerLevel);
        }

};