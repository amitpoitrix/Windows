#include <iostream>
using namespace std;

// In Insertion Sort we select 1 element from unsorted array and place it in order in sorted array, here i will iterate through unsorted array and 
// j will iterate through unsorted region in reverse order started from i-1
void insertionSort(int a[], int n){
    // i started from 1st index because 0th index value assume to be in sorted region
    for (int i = 1; i < n; i++)
    {
        int no = a[i];  // assuming current ith position value to be picked up from unsorted region
        int j = i-1;  
        while (j >= 0 && no < a[j])
        {
            a[j+1] = a[j];   
            j--;
        }
        a[j+1] = no;  // As after above iteration j will be 1 position less than the desired one 
    }
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
}

int main(){
    int a[] = {3,2,4,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}