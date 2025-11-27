#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const char* oldName = "oldfile.txt";
    const char* newName = "newfile.txt";

    if(rename(oldName, newName) == 0)
        cout << "File renamed successfully." << endl;
    else
        perror("Error renaming file");

    return 0;
}
