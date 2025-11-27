#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a number with leading zeros: ";
    getline(cin, str);

    str.erase(0, str.find_first_not_of('0'));
    if(str.empty()) str = "0";

    cout << "Number without leading zeros: " << str << endl;
    return 0;
}
