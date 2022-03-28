#include <iostream>
using namespace std;

int searchIn(int a[], int s, int e, int key){
    // Base Condition
    if (s > e)
        return -1;

    int mid = (s+e)/2;

    // if key element is the mid element
    if (key == a[mid])
        return mid;

    // If mid lies in First Line
    if (a[s] <= a[mid])
    {
        // key lies in sorted portion 
        if (key >= a[s] && key <= a[mid])
            return searchIn(a, s, mid-1, key);
        // else key lies in unsorted portion
        else
            return searchIn(a, mid+1, e, key);
    }
    // else mid lies in Second Line
    else
    {
        if(key >= a[mid] && key <= a[e])
            return searchIn(a, mid+1, e, key);
        else
            return searchIn(a, s, mid-1, key);
    }
    
}

int main(){
    int a[] = {5,6,1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin >> key;
    cout << "Element " << key << " is at index : " << searchIn(a, 0, n-1, key) << endl;
    return 0;
}