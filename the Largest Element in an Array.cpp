#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[100];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
