#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    int sum = sumOfNaturalNumbers(n);
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
}
