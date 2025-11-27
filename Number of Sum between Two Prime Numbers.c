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
bool isSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << "Yes! " << n << " can be written as "
                 << i << " + " << n - i << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number, and I will check if it can be expressed as a sum of two prime numbers: ";
    cin >> n;

    if (!isSumOfTwoPrimes(n)) {
        cout << "Sorry! " << n << " cannot be expressed as the sum of two prime numbers." << endl;
    }
}
