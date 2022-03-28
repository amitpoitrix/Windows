#include <iostream>
using namespace std;
// subarrays are the continuous subparts of an array
int main(){
    int n;
    int a[10];
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << "All the possible subarrays are : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //Elements of subarrays
            for (int k = i; k <= j; k++)
                cout << a[k] << ",";
            cout << endl;   
        }
    }
    return 0;
}