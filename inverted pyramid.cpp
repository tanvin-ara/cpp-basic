#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the inverted pyramid: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int star = 0; star < (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
