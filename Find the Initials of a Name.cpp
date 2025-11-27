#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name;
    cout << "Enter full name: ";
    getline(cin, name);

    stringstream ss(name);
    string word;
    cout << "Initials: ";
    while(ss >> word){
        cout << word[0];
    }
    cout << endl;
    return 0;
}
