#include <iostream>
using namespace std;
int main(){
     int a;
     long factorial = 1.0;
     cout << "positive number: ";
     cin >> a;
     if (a < 0)
         cout << "Error! factorial of a negative number doesn't exist. ";
         else{
          for(int i = 1; i <= a; ++i){
                    factorial *= i;
          }
          cout << "factorial of " << a << " = " << factorial;
         }
return 0;
}
