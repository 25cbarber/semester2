#ifndef WIZARD_HPP
#define WIZARD_HPP
#include <iostream>

using namespace std;

class wizard {
    protected:
        string name, element;
        int level, maxMp, mp;
        int damage = 10;

    public:
         wizard (string name, string element, int level, int maxMp);
         string displayInfo();
         virtual void castSpell(wizard &target, int damage);
         void recharge();
};

#endif