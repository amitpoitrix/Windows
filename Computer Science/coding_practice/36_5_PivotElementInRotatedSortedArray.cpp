#include <iostream>
using namespace std;

// Finding pivot element index in rotated sorted index using Binary Search
// One test case is failing when element in sorted order so it couldn't determine pivit element as the last element
int main(){
    int a[] = {6,7,0,1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int s = 0;
    int e = n-1;
    int mid;
    while (s <= e)
    {
        mid = (s+e)/2;
        // First Condition
        if (mid < e && a[mid] > a[mid+1]){
            cout << mid << " is the Pivot Element Index";
            break;
        }

        // Second Condition
        if (mid > s && a[mid] < a[mid-1]){
            cout << mid-1 << " is the Pivot Element Index";
            break;
        }
        
        // If above two conditions fails than pivot element lies in unsorted portion in sorted rotated array
        // If unsorted portion lies in left side
        if (a[s] >= a[mid])
            e = mid-1;
        // If unsorted portion lies in right side
        else
            s = mid+1;
    }

    if (s > e){
        cout << "Pivot element doesnot exist" << endl;
    }
    
    return 0;
}