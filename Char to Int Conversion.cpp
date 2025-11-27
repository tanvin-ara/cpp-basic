
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int ascii = static_cast<int>(ch);
    cout << "ASCII value: " << ascii << endl;
    return 0;
}
