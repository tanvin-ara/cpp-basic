#include <iostream>
using namespace std;

int main() {
    int hours;
    cout << "Enter hours: ";
    cin >> hours;

    int minutes = hours * 60;
    int seconds = hours * 3600;

    cout << hours << " hours = " << minutes << " minutes = " << seconds << " seconds" <<
endl;
    return 0;
}

