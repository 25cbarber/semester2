#include <iostream> 
using namespace std;

// I like switches more because i can type out less and it still works the same. An example of when i should use an if else statement is when there is an equation involved like 
// if num > num2

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

void ifElseGrade() {

    if (toupper(grade) == 'A') {
        std::cout << "Amazing job!!" << std::endl;
    } else if (toupper(grade) == 'B'){
        cout << "You did really well!" << endl;
    } else if (toupper(grade) == 'C'){
        cout << "You did average." << endl;
    } else if (toupper(grade) == 'D'){
        cout << "Try harder next time." << endl;
    } else if (toupper(grade) == 'F'){
        cout << "You failed :(" << endl;
    } else {
        cout << "Invalid input!" << endl;
    }

}


int main() {
    cout << "what grade did you get in the vocano experts class?: " << endl;
    cin >> grade;
    cout << " " << endl;

    whatGrade();

    cout << "what grade did you get in the mermaid experts class?: " << endl;
    cin >> grade;
    cout << "  " << endl;

    whatGrade();

    cout << "what grade did you get in the rock experts class?: " << endl;
    cin >> grade;
    cout << "  " << endl;

    ifElseGrade();


}