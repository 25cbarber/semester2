#include <iostream>
#include <string>
#include "pokemon.hpp"
using namespace std;

int main() {
    
    pokemon newpokemon1("squirtle", water, asleep, 5, 50, 50);

    cout << newpokemon1.displayInfo() << endl;
    newpokemon1.changeStatus(normal);
    cout << newpokemon1.displayInfo() << endl;

    pokemon newpokemon2("Pikachu", electric, paralyzed, 10, 100, 100);

    cout << newpokemon2.displayInfo() << endl;
    newpokemon2.changeStatus(poisoned);
    cout << newpokemon2.displayInfo() << endl;


}