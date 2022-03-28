#include <iostream>
using namespace std;

// Binary search used to search element of sorted array in O(log N) and based on Divide & Conquer Algorithm
int binarySearch(int a[], int n, int key){
    int s, e, mid;
    s = 0;
    e = n-1;

    while (s <= e)
    {
        mid = (s+e)/2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int main(){
    int a[] = {1,3,5,7,8,22,34,56,78};
    int n = sizeof(a)/sizeof(int);
    cout << "Enter the element to search : ";
    int key;
    cin >> key;
    int searchIndex = binarySearch(a, n, key);
    if (searchIndex == -1)
        cout << key <<" not found";
    else
        cout << key <<" found at index " << searchIndex;
    
    return 0;
}