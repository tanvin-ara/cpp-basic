#include <iostream>
#include <cmath>
using namespace std;

int main(){
     double p, r, t;
     cin >> p >> r >> t;
     cout << p * pow(1 + r/100, t)-p;
     return 0;
     }
