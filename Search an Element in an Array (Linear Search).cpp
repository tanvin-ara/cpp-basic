
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            found = true;
            break;
        }
    }

    if(found) cout << key << " is present in the array." << endl;
    else cout << key << " is not present in the array." << endl;

    return 0;
}
