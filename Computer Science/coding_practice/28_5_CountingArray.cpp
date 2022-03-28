#include <iostream>
using namespace std;

void countingArray(int a[], int n){
    // First count the max element in the given array
    int k = a[0];   // Let k be the variable to store max element in the given array
    for (int i = 0; i < n; i++)
    {
        k = max(k,a[i]);   // max() inbuilt function
    }

    // Creating the count array of size k, Freq/count array to store the count of each distinct element in a array
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    // Creating Cumulative Frequency in count array in order to determine each distinct element position
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i-1];
    }

    // Now determining the position of each element in the array and store it in output[n]
    int output[n];
    for (int i = n-1; i >= 0; i--)
    {
        output[--count[a[i]]] = a[i];
    }

    // for placing the output[] array in original array a[]

    for (int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
    
}

int main(){
    int a[] = {2,5,3,3,7,8,6,6,6};
    int n = sizeof(a)/sizeof(a[0]);
    //calling function
    countingArray(a,n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
    
}