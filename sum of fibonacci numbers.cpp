#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of terms (N): ";
    cin >> N;

    long long a = 0, b = 1;
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            sum += a;
        }

        long long next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of Fibonacci numbers at even indexes up to "
         << N << " terms = " << sum << endl;

    return 0;
}
