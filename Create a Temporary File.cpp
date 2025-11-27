#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream tempFile("tempfile.txt");
    if(tempFile.is_open()){
        tempFile << "This is a temporary file.\n";
        tempFile << "It will store temporary data.\n";
        tempFile.close();
        cout << "Temporary file created successfully." << endl;
    } else {
        cout << "Unable to create file." << endl;
    }
    return 0;
}
