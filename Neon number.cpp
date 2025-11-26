#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;
    int sum = 0;

    while (square != 0) {
        int digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if (sum == num)
        cout << num << " is a Neon Number." << endl;
    else
        cout << num << " is NOT a Neon Number." << endl;

    return 0;
}
