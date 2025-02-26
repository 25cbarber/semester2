#include <string>
#include <vector>
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

extern vector<task> sunvect;
extern vector<task> monvect;
extern vector<task> tuesvect;
extern vector<task> wedvect;
extern vector<task> thursvect;
extern vector<task> frivect;
extern vector<task> satvect;
