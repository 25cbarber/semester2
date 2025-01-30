#include "Wizard.hpp"
#include <random>

class wildmagicwizard : public wizard {

    private:
        int critChance;
        mt19937 rng;
        uniform_int_distribution<int> dist;

    public:
        wildmagicwizard(string name, string element, int level, int maxMp, int critChance) : wizard(name, element, level, maxMp), critChance(critChance), rng(random_device{}()), dist(1, 100) {}


        void castSpell(wizard &target, int damage) override {
            int randomValue = dist(rng);
            if (randomValue <= critChance) {
                damage *= 2;
            }
            wizard::castSpell(target, damage);

        }
        void specialAbility() {
            critChance += 10;
        }

};