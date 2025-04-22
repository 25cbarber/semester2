#include <iostream>
#include <vector>
#include <string>
#include "artifact.hpp"
#include <algorithm>

using namespace std;

int main() {
    vector<Artifact> items = {
        {"Golden idol", 1000},
        {"Ancient scroll", 500},
        {"Diamond necklace", 2000},
        {"John cena", 300}
    };

    cout << "All Items:" << endl;
    for (vector<Artifact>::iterator it = items.begin(); it != items.end(); ++it) {
        cout << *it << endl; // Using the overloaded operator
    }

    vector<Artifact>::iterator most_valuable = max_element(items.begin(), items.end(), [](const Artifact& a, const Artifact& b) {
        return a.value < b.value;
    });
    cout << "\nMost Valuable Item:" << endl;
    cout << *most_valuable << endl; // Using the overloaded operator

    vector<Artifact>::iterator least_valuable = min_element(items.begin(), items.end(), [](const Artifact& a, const Artifact& b) {
        return a.value < b.value;
    });
    cout << "\nLeast Valuable Item:" << endl;
    cout << *least_valuable << endl; // Using the overloaded operator

    return 0;
}