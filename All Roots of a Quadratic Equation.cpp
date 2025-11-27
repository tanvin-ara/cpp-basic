#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Let's solve a quadratic equation of the form ax^2 + bx + c = 0" << endl;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    double discriminant = b*b - 4*a*c;


    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Great! The equation has two real and different roots: "
             << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "Nice! The equation has two real and equal roots: " << root << endl;
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Hmm… the roots are complex numbers: "
             << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }
}
