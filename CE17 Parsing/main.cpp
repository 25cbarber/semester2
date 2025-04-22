#include <iostream>
#include <string>
#include <limits>
// i prefer the second method because it was easier for me to code. I think the second method would be better for a 
//large scale project because it is more flexible.
using namespace std;

void parseByStream() {

    string stringInput;
    char charDelimiter;

    cout << "Enter a string: " << endl;
    getline(cin, stringInput);

    cout << "Enter a delimiter: " << endl;
    cin >> charDelimiter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result;
    for (size_t i = 0; i < stringInput.size(); i++) {
        if (stringInput[i] == ' ') {
            result += charDelimiter;
        } else {
            result += stringInput[i]; 
        }
    }

    cout << "Result: " << result << endl;
}

void parseByStr() {

    string stringInput;
    string stringDelimiter;

    cout << "Enter a string: " << endl;
    getline(cin, stringInput);

    cout << "Enter a delimiter: " << endl;
    cin >> stringDelimiter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result;
    for (size_t i = 0; i < stringInput.size(); i++) {
        if (stringInput[i] == ' ') {
            result += stringDelimiter;
        } else {
            result += stringInput[i]; 
        }
    }

    cout << "Result: " << result << endl;
}

int main() {
    parseByStr();
    return 0;
}