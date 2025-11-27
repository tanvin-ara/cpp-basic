#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    stringstream ss;
    ss << hex << num;
    cout << "Hexadecimal: " << ss.str() << endl;
    return 0;
}
