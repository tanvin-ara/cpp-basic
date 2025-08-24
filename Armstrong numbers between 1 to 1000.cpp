#include <iostream>
#include <cmath>
using namespace std;
int main(){
     std::cout << "Armstrong numbers between 1 to 1000 are : ";
     for (int i = 1; i <= 1000; ++i){
          int num = i;
          int sum = 0;
          int originalNum = i;
          int count = 0;

          if (num == 0){
                    count = 1;
          }else {
                  int tempNum = num;
                  while (tempNum > 0){
                    tempNum /= 10;
                    count++;
                  }
          }
     num = originalNum;
     while (num > 0){
          int digit = num % 10;
          sum += static_cast<int>(pow(digit, count ));
          num /= 10;
     }
         if (originalNum == sum) {
             std::cout << originalNum << " ";
         }

     }
std ::cout << std ::endl;

return 0;

}


