#include <iostream>
using namespace std;

int main() {
     float r1, i1, r2, i2, rSum, iSum;

     cout << "Enter real and imaginary part of first complex number: ";
     cin >> r1 >> i1;

     cout <<  "Enter real and imaginary part of second complex number: ";
     cin >> r2 >> i2;

     rSum = r1 + r2;
     iSum = i1 + i2;

     cout << "Sum = " << rSum << " + " << iSum << "i" << endl;
     return 0;

}
