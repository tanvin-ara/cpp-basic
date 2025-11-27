#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    char *start = str;
    char *end = str + strlen(str) - 1;
    bool isPalindrome = true;

    while(start < end){
        if(*start != *end){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
