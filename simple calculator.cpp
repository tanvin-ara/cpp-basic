#include <iostream>
using namespace std;
int main(){
     char op;
     float a, b;

     cout << "first number: ";
     cin >> a;
     cout << "operator (+, -, *, /): ";
     cin >> op;
     cout << "second number: ";
     cin >> b;
     if (op == '+')
          cout << "result = " << a + b;
     else if (op == '-')
           cout << "result = " << a - b;
     else if(op == '*')
             cout << "result = " << a * b;
     else if (op == '/'){
          if(b != 0)
             cout << "error! division by zero. ";
     }
     else
          cout << "invalid operator! ";
     return 0;
}
