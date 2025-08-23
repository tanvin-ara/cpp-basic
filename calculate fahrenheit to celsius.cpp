#include <iostream>
using namespace std;

int main(){
     float Fahrenheit, Celsius;

     cout << " Enter temperature in Fahrenheit: ";
     cin >> Fahrenheit;

      Celsius = ( Fahrenheit - 32) * 5 / 9 ;
      cout << "Temperature in Celsius = " << Celsius;
      return 0;

}
