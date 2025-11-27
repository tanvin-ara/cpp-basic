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
void printPrimes(int low, int high) {
    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int low, high;
    cout << "Enter lower and upper bound: ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";
    printPrimes(low, high);
}
