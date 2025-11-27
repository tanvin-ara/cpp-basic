#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n * (n + 1) / 2;

    for (int i = n; i >= 1; i--) {
        int temp = num;
        for (int j = 1; j <= i; j++) {
            cout << temp << " ";
            temp--;
        }
        cout << endl;
        num -= i;
    }
}
