#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int reversed = 0;

    int temp = (num < 0) ? -num : num;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (num < 0) {
        reversed = -reversed;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
