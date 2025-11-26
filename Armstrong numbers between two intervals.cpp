#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int low, high;
    cout << "Enter the starting number: ";
    cin >> low;

    cout << "Enter the ending number: ";
    cin >> high;

    cout << "\nArmstrong numbers between " << low << " and " << high << " are:\n";

    for (int num = low; num <= high; num++) {

        int temp = num;
        int digits = 0;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        int sum = 0;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
