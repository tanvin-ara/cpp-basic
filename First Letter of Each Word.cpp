#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    cout << "First letters: ";
    while(ss >> word){
        cout << word[0] << " ";
    }
    cout << endl;
    return 0;
}
