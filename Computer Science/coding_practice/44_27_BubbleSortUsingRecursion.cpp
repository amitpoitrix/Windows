#include <iostream>
using namespace std;

// Here in this BubbleSort recursive function we can't use loop inside it
void bubbleSort(int a[], int n){
    // Base condition
    if (n == 0)
        return;
    // sort 1 element and do recursive call for remaining n-1 elements
    for (int j = 0; j < n-1; j++)
    {
        if (a[j] > a[j+1])
            swap(a[j], a[j+1]);
    }
    bubbleSort(a, n-1);
}

// Bubble Sort Recursive Function without using any loop
void bubbleSort2(int a[], int j, int n){
    // Base Condition
    if (n == 0)
        return;
    
    // when j reaches the last element i.e., 1 iteration completes than it means last element is in sorted position and we do recursive call for rest n-1 elements
    if (j == n-1)
        return bubbleSort2(a, 0, n-1);
    
    //swapping the element
    if (a[j] > a[j+1])
        swap(a[j], a[j+1]);
    
    // after swapping check for next element by calling again recursive function
    bubbleSort2(a, j+1, n);
    return;
}

int main(){
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    // Calling bubbleSort()
    //bubbleSort(a, n);
    bubbleSort2(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}