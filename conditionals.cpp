#include <iostream> 
using namespace std;

char grade;


void whatGrade() {
    
    switch (toupper(grade)) {
        case 'A':
            cout << "Wow, you know a lot!" << endl;
            break;
        case 'B':
            cout << "your pretty good" << endl;
            break;
        case 'C':
            cout << "Your the avarage expert" << endl;
            break;
        case 'D':
            cout << "you could do better" << endl;
            break;
        case 'F':
            cout << "Oh no! you failed :(" << endl;
            break;
        default:
            cout << "Thats not a real grade!!!" << endl;
            cout << "what was the real grade?: " << endl;
            cin >> grade; 
            whatGrade();
        

    };
};


int main() {
    cout << "what grade did you get in the vocano experts class?: " << endl;
    cin >> grade;
    cout << " " << endl;

    whatGrade();

    cout << "what grade did you get in the mermaid experts class?: " << endl;
    cin >> grade;
    cout << "  " << endl;

    whatGrade();


}