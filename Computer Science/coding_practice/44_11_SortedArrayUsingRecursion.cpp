#include <iostream>
using namespace std;

bool isSorted(int a[], int n){
    // Base Condition
    if (n == 1)
        return true;
    // Recursive Condition
    if (a[0] <= a[1] && isSorted(a+1, n-1))
        return true;
    return false;
}

int main(){
    int a[] = {1,2,13,4,5};
    int n = sizeof(a)/sizeof(int);
    if (isSorted(a, n))
        cout << "Yes it's sorted" << endl;
    else
        cout << "No It's not sorted" << endl;
    
    return 0;
}