#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    double sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];

    double average = sum / n;
    cout << "Average: " << average << endl;
    return 0;
}
