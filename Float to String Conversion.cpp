#include <iostream>
#include <string>
using namespace std;

int main() {
    float num;
    cout << "Enter a float value: ";
    cin >> num;

    string str = to_string(num);
    cout << "String: " << str << endl;
    return 0;
}
