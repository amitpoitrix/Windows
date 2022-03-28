#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[10];
    cout << "Enter the no of elements you want to enter :" << endl;
    cin >> n;
    cout << "Enter the elements : " << endl;
    for ( int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key elements you want to search" << endl;
    cin >> key;

    // Linear Search logic
    int i;
    for ( i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Key found at index " << i << endl;
            break;
        }
    }
    if (i == n)
        cout << key << " doesnot exist in the array" << endl;
    return 0;
}