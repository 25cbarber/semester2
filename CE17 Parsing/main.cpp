#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void parseByStream() {

    string stringInput;
    char charDelimiter;

    cout << "Enter a string: " << endl;
    getline(cin, stringInput);

    cout << "Enter a delimiter: " << endl;
    cin >> charDelimiter;
    
    istringstream iss(stringInput);
    while (iss, charDelimiter) {
        cout << stringInput << endl;
    }


}

int main() {

    parseByStream();




}