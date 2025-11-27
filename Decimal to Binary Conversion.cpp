#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    string binary = bitset<32>(num).to_string();
    binary = binary.substr(binary.find('1'));
    cout << "Binary: " << binary << endl;

    return 0;
}
