#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int pos;
    cout << "Enter main string: ";
    getline(cin, str1);
    cout << "Enter string to insert: ";
    getline(cin, str2);
    cout << "Enter position to insert: ";
    cin >> pos;

    str1.insert(pos, str2);
    cout << "Resultant string: " << str1 << endl;
    return 0;
}
