#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    int temp[n], j = 0;
    for(int i=0;i<n;i++){
        if(i==0 || arr[i] != arr[i-1]){
            temp[j++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i=0;i<j;i++) cout << temp[i] << " ";
    cout << endl;
    return 0;
}
