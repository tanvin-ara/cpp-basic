#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    int decimal;
    stringstream ss;
    ss << octal;
    ss >> oct;
    ss >> decimal;

    cout << "Decimal: " << stoi(octal, nullptr, 8) << endl;
    return 0;
}
