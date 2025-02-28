#include <iostream>
#include "tasks.hpp"
#include <string>
#include <limits>
using namespace std;

vector<task> task::sunvect;
vector<task> task::monvect;
vector<task> task::tuesvect;
vector<task> task::wedvect;
vector<task> task::thursvect;
vector<task> task::frivect;
vector<task> task::satvect;

task::task(string dayOfWeek, string name, bool complete)
    : dayOfWeek(dayOfWeek), name(name), complete(complete) {}

void createTask();

void Intro() {
    int introchoice;

    while (true) {
        cout << "\nDo you want to:\n 1. Create new task\n 2. View schedule\n 3. Complete a task\n 4. Delete all tasks\n 5. Quit\n \nEnter a number: ";
        cin >> introchoice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

        switch (introchoice) {
            case 1:
                createTask();
                break;

            case 2:
                displaytasks();
                break;
            
            case 3:
            deletingtasks();
            break;

            case 5:
                cout << "GoodBye!" << endl;
                return;

            default:
                cout << "Invalid choice. Please enter a number from the options above.\n";
                break;
        }
    }    
}

void createTask() {
    string dayOfWeek;
    string nameOfTask;

    cout << "\nWhat day of the week do you want to create the task?: ";
    cin >> dayOfWeek;
    cin.ignore();

    cout << "What is the task?: ";
    getline(cin, nameOfTask);

    task newtask(dayOfWeek, nameOfTask, false);

    if (dayOfWeek == "Monday" || dayOfWeek == "monday") {
        task::monvect.emplace_back(newtask);
    } else if (dayOfWeek == "Tuesday" || dayOfWeek == "tuesday") {
        task::tuesvect.emplace_back(newtask);
    } else if (dayOfWeek == "Wednesday" || dayOfWeek == "wednesday") {
        task::wedvect.emplace_back(newtask);
    } else if (dayOfWeek == "Thursday" || dayOfWeek == "thursday") {
        task::thursvect.emplace_back(newtask);
    } else if (dayOfWeek == "Friday" || dayOfWeek == "friday") {
        task::frivect.emplace_back(newtask);
    } else if (dayOfWeek == "Saturday" || dayOfWeek == "saturday") {
        task::satvect.emplace_back(newtask);
    } else if (dayOfWeek == "Sunday" || dayOfWeek == "sunday") {
        task::sunvect.emplace_back(newtask);
    } else {
        cout << "\nInvalid day entered. Please enter a valid day of the week.\n";
        createTask();
    }

    cout << "\nNew Task Created on " + dayOfWeek << endl;
    Intro();

}