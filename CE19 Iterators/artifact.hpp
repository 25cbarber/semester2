#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Artifact {
public:
    string name;
    int value;

    Artifact(string n, int v) : name(n), value(v) {}
};

ostream& operator<<(ostream& os, const Artifact& artifact) {
    os << "Artifact: " << artifact.name << ", Value: " << artifact.value << endl;
    return os;
}
