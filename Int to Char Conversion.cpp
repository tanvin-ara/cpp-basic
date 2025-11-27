
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    char ch = static_cast<char>(num);
    cout << "Character: " << ch << endl;
    return 0;
}
