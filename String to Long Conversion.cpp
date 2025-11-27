#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a numeric string: ";
    cin >> str;

    long num = stol(str);
    cout << "Long integer: " << num << endl;
    return 0;
}
