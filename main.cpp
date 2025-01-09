#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Hello World!!" << endl;
    cout << "How old are you?: ";
    cin >> age;

    cin.ignore();

    cout << "What is your full name?: ";
    getline(cin, name);

    cout << "Welcome " << name << "!" << " You are " << age << " years old!" << endl;



}
