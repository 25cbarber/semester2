#include <iostream>
#include <map>
#include "knight.hpp"

using namespace std;

bool addKnight(map<string, Knight>& knights, const Knight& knight) {
    auto result = knights.insert({knight.name, knight});
    return result.second;
}

bool removeKnight(map<string, Knight>& knights, const string& name) {
    return knights.erase(name) > 0;
}

Knight findKnight(map<string, Knight>& knights, const string& name) {
    auto it = knights.find(name);
    if (it != knights.end()) {
        return it->second;
    }
    return Knight("", "", 0);
}

int main() {
    map<string, Knight> knights;
    int choice;

    do {
        cout << "\nChoose a knight\n";
        cout << "1. Add a Knight\n";
        cout << "2. Remove a Knight\n";
        cout << "3. Find a Knight\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                string name, title;
                int achievements;
                cout << "Enter Knight's Name: ";
                getline(cin, name);
                cout << "Enter Knight's Title: ";
                getline(cin, title);
                cout << "Enter Knight's Achievements: ";
                cin >> achievements;

                if (addKnight(knights, Knight(name, title, achievements))) {
                    cout << "Knight '" << name << "' added successfully.\n";
                } else {
                    cout << "Error: Knight with the name '" << name << "' already exists.\n";
                }
                break;
            }
            case 2: {
                string name;
                cout << "Enter Knight's Name to Remove: ";
                getline(cin, name);

                if (removeKnight(knights, name)) {
                    cout << "Knight '" << name << "' removed successfully.\n";
                } else {
                    cout << "Error: Knight '" << name << "' not found.\n";
                }
                break;
            }
            case 3: {
                string name;
                cout << "Enter Knight's Name to Find: ";
                getline(cin, name);

                Knight foundKnight = findKnight(knights, name);
                if (foundKnight.name != "") {
                    cout << "\nKnight Details\n";
                    cout << "Name: " << foundKnight.name << "\n";
                    cout << "Title: " << foundKnight.title << "\n";
                    cout << "Achievements: " << foundKnight.achievements << "\n";
                } else {
                    cout << "Error: Knight '" << name << "' not found.\n";
                }
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}