
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    stringstream ss;
    ss << oct << num;
    cout << "Octal: " << ss.str() << endl;
    return 0;
}
