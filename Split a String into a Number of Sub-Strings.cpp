#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    vector<string> substrings;

    while(ss >> word){
        substrings.push_back(word);
    }

    cout << "Sub-strings: ";
    for(auto s: substrings) cout << s << " | ";
    cout << endl;
    return 0;
}
