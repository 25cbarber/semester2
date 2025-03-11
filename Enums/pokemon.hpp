#include <iostream>
#include <string>
using namespace std;

enum pokemonTypes {
    water, fire, electric, grass, fighting
};

enum pokemonStatus {
    normal, paralyzed, poisoned, asleep
};

class pokemon {

    private:
        string name;
        int level, maxHP, HP;
        pokemonTypes type;
        pokemonStatus status;

        string typeToString(pokemonTypes type) const {
            switch (type) {
                case water: return "Water";
                case fire: return "Fire";
                case electric: return "Electric";
                case grass: return "Grass";
                case fighting: return "Fighting";
                default: return "Unknown";
            }
        }
    
        string statusToString(pokemonStatus status) const {
            switch (status) {
                case normal: return "Normal";
                case paralyzed: return "Paralyzed";
                case poisoned: return "Poisoned";
                case asleep: return "Asleep";
                default: return "Unknown";
            }
        }

    public:

        pokemon(string name, pokemonTypes type, pokemonStatus status, int level, int maxHP, int HP) : 
        name(name), type(type), status(status), level(level), maxHP(maxHP), HP(maxHP) {}





        string displayInfo() {
            return "Name: " + name + "\n" +
               "Type: " + typeToString(type) + "\n" +
               "Status: " + statusToString(status) + "\n" +
               "Level: " + to_string(level) + "\n" +
               "Max HP: " + to_string(maxHP) + "\n" +
               "Current HP: " + to_string(HP) + "\n";
        }

        void changeStatus(pokemonStatus newStatus) {
            status = newStatus;
        }






};