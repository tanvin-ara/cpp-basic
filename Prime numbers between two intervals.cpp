#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int low, high;

    cout << "Enter the starting number: ";
    cin >> low;

    cout << "Enter the ending number: ";
    cin >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are:\n";

    for (int num = low; num <= high; num++) {
        if (isPrime(num))
            cout << num << " ";
    }

    cout << endl;
    return 0;
}
