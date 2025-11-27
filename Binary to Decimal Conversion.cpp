
#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    for(char c : binary) {
        decimal = decimal*2 + (c - '0');
    }

    cout << "Decimal: " << decimal << endl;
    return 0;
}
