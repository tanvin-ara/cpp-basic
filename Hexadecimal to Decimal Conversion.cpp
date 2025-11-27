#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string hexNum;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNum;

    int decimal;
    stringstream ss;
    ss << hex << hexNum;
    ss >> decimal;

    cout << "Decimal: " << decimal << endl;
    return 0;
}
