#include "Wizard.hpp"

class firewizard : public wizard {
    public:
    
    firewizard (string name, string element, int level, int maxMp) : wizard(name, element, level, maxMp) {}

    void specialAbility() {

        maxMp =+ 10;
    }

};