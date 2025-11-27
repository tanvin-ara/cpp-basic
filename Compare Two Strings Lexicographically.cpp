#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if(str1 == str2)
        cout << "Strings are equal." << endl;
    else if(str1 < str2)
        cout << str1 << " comes before " << str2 << endl;
    else
        cout << str1 << " comes after " << str2 << endl;

    return 0;
}
