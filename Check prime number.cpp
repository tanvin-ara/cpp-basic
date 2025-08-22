#include <iostream>
using namespace std;

int main(){
     int num;
     cout << "Enter a number: ";
     cin >> num;

     if(num <= 1){
        cout << "Not a prime number:" << endl;
        return 0;
     }

     for (int i = 2; i < num; i++){
          if(num % i == 0){
             cout << "Not a prime number:" << endl;

             return 0;
          }
     }

     cout << "Prime number:" << endl;
     return 0;
}
