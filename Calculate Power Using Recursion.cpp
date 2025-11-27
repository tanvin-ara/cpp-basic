#include <iostream>
using namespace std;

// Function to calculate x^n recursively
double power(double x, int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return x * power(x, n - 1);
    else
        return 1 / power(x, -n);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;
}
