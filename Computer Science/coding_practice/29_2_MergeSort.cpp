#include <iostream>
using namespace std;

// Merge Sort based on Divide & Conquer sorting algorithm
void merge(int a[], int s, int e){
    int mid = (s+e)/2;

    // Initializing 3 pointers for merging
    int i = s;
    int j = mid+1;
    int k = s;

    // taking temp[] array to store the merge output
    int temp[100];

    // Sorting begins after comparing each element from both arrays and insert it into temp[]
    while (i <= mid && j <= e)
    {
        if (a[i] <= a[j] )
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    // If traversing over 2nd array by j reach beyond e than rest 1st array will copy as it is to temp[]
    while (i <= mid){
        temp[k++] = a[i++];
    }

    // If traversing over 1nd array by i reach beyond mid than rest 2nd array will copy as it is to temp[]
    while (j <= e){
        temp[k++] = a[j++];
    }
    
    // Copying temp[] output to original a[]
    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }  
}

void mergeSort(int a[], int s, int e){
    // Base condition
    if(s >= e)
        return;

    // 1. Divide
    int mid = (s+e)/2;

    // 2. Recursively calling mergeSort() to separate each and every element of array to sort, 1st from s to mid, 2nd from mid+1 to e
    mergeSort(a, s, mid);
    mergeSort(a, mid+1, e);

    // 3. Merge the two parts after sorting using merge()
    merge(a, s, e);
}

int main(){
    int a[] = {5,5,5,2,3,8,6,1,7};
    int n = sizeof(a)/sizeof(a[0]);
    // calling mergeSort function
    mergeSort(a, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}