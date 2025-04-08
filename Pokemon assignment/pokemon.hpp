#include <iostream>
#include <string>
using namespace PokeData;
#include "PokeData.hpp"

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