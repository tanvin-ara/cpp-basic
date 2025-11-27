
#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    return 0;
}
