#include <iostream>
using namespace std;

// Printing wave sorting without actual using sorting algorithm
int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < n; i+=2)
    {
        // checking for left element
        if (i > 0 && a[i-1] > a[i])
            swap(a[i-1], a[i]);
        
        // cheching for right element
        if (i < n-1 && a[i+1] > a[i])
            swap(a[i+1], a[i]);
    }
    
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";

    return 0;
}