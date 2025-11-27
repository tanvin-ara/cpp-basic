
#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float marks;
};

int main() {
    Student s;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter student marks: ";
    cin >> s.marks;

    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
