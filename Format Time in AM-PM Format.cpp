#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int min = ltm->tm_min;
    int sec = ltm->tm_sec;
    string period = (hour >= 12) ? "PM" : "AM";

    if(hour > 12) hour -= 12;
    if(hour == 0) hour = 12;

    cout << "Current time (AM/PM): ";
    cout << hour << ":" << min << ":" << sec << " " << period << endl;
    return 0;
}
