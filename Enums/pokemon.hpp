#include <iostream>
#include <string>
using namespace std;

enum pokemonTypes {
    water, fire, electric, grass, fighting
};

enum pokemonStatus {
    normal, paralyzed, poisoned, asleep
};

string typeToString(pokemonTypes type) {
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

class pokemon {

    private:
        string name;
        int level, maxHP, HP;
        pokemonTypes type;
        pokemonStatus status;

        Move moves[4];
        int moveCount = 0;
    
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

        bool addMove(const string& name, pokemonTypes type, int power, double accuracy) {
            if (moveCount >= 4) {
                cout << "Error: Move array is full. Cannot add more moves." << endl;
                return false;
            }
            moves[moveCount] = Move(name, type, power, accuracy);
            moveCount++;
            return true;
        }

    void displayMoves() const {
        cout << "Moves:" << endl;
        for (int i = 0; i < moveCount; i++) {
            cout << moves[i].toString() << endl;
            cout << "-----------------" << endl;
        }
    }

        






};