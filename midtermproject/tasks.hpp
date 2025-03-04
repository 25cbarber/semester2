#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class task {
public:
    string dayOfWeek;
    string name;
    bool complete;

    static vector<task> sunvect;
    static vector<task> monvect;
    static vector<task> tuesvect;
    static vector<task> wedvect;
    static vector<task> thursvect;
    static vector<task> frivect;
    static vector<task> satvect;

    task(string dayOfWeek, string name, bool complete);
};

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

}

void displaytasks() {

    cout << "\nSunday:" << endl;
    for (const task& t : task::sunvect) {
    cout << " * " << t.name << endl;
    }

    cout << "\nMonday:" << endl;
    for (const task& t : task::monvect) {
    cout << " * " << t.name << endl;
    }

    cout << "\nTuesday:" << endl;
    for (const task& t : task::tuesvect) {
    cout << " * " << t.name << endl;
    }
    
    cout << "\nWednesday:" << endl;
    for (const task& t : task::wedvect) {
    cout << " * " << t.name << endl;
    }

    cout << "\nThursday:" << endl;
    for (const task& t : task::thursvect) {
    cout << " * " << t.name << endl;
    }

    cout << "\nFriday:" << endl;
    for (const task& t : task::frivect) {
    cout << " * " << t.name << endl;
    }

    cout << "\nSaturday:" << endl;
    for (const task& t : task::satvect) {
    cout << " * " << t.name << endl;
    }
}

void deletingtasks() {
    string deleteday, deletetask;

    cout << "What day is the task on?: ";
    cin >> deleteday;
    cin.ignore();

    cout << "What task was completed?: ";
    getline(cin, deletetask);

    vector<task>* day_vector = nullptr;

    if (deleteday == "Sunday" || deleteday == "sunday") {
        day_vector = &task::sunvect;
    } else if (deleteday == "Monday" || deleteday == "monday") {
        day_vector = &task::monvect;
    } else if (deleteday == "Tuesday" || deleteday == "tuesday") {
        day_vector = &task::tuesvect;
    } else if (deleteday == "Wednesday" || deleteday == "wednesday") {
        day_vector = &task::wedvect;
    } else if (deleteday == "Thursday" || deleteday == "thursday") {
        day_vector = &task::thursvect;
    } else if (deleteday == "Friday" || deleteday == "friday") {
        day_vector = &task::frivect;
    } else if (deleteday == "Saturday" || deleteday == "saturday") {
        day_vector = &task::satvect;
    } else {
        cout << "\nInvalid day entered. Please enter a valid day of the week.\n";
        deletingtasks();
        return;
    }

    if (day_vector != nullptr) {

        auto new_end = remove_if(day_vector->begin(), day_vector->end(), [&](const task& t) {
            return t.name == deletetask;
        });

        day_vector->erase(new_end, day_vector->end());

        cout << "Task \"" << deletetask << "\" removed from " << deleteday << ".\n";
    }
}

extern vector<task> sunvect;
extern vector<task> monvect;
extern vector<task> tuesvect;
extern vector<task> wedvect;
extern vector<task> thursvect;
extern vector<task> frivect;
extern vector<task> satvect;
