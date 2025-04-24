#include <iostream>
#include <string>

class Knight {
public:
    std::string name;
    std::string title;
    int achievements;

    Knight(std::string n, std::string t, int a) : name(n), title(t), achievements(a) {}

    // Overloaded output operator
    friend std::ostream& operator<<(std::ostream& os, const Knight& k) {
        os << "Knight: " << k.name << ", Title: " << k.title << ", Achievements: " << k.achievements << "\n";
        return os;
    }
};