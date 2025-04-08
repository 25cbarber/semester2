#include <iostream>
#include <string>

using namespace std;

namespace PokeData {

    enum pokemonTypes {
        water, fire, electric, grass, fighting
    };
    
    enum pokemonStatus {
        normal, paralyzed, poisoned, asleep
    };

    std::string typeToString(pokemonTypes type) {
        switch (type) {
            case water: return "Water";
            case fire: return "Fire";
            case electric: return "Electric";
            case grass: return "Grass";
            case fighting: return "Fighting";
            default: return "Unknown";
        }
    }

    struct Move {
        string name;
        int power;
        double accuracy;
        pokemonTypes type;
    
        Move(const string& moveName, pokemonTypes moveType, int movePower, double moveAccuracy)
        : name(moveName), type(moveType), power(movePower), accuracy(moveAccuracy) {}
    
        Move() : name(""), type(water), power(0), accuracy(0.0) {}
    
        string toString() const {
            return "Move Name: " + name + "\n" + 
            "Type: " + typeToString(type) + "\n" +
            "Power: " + to_string(power) + "\n" +
            "Accuracy: " + to_string(accuracy) + "\n";
    }
    
    };


}