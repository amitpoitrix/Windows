#include <iostream>
using namespace std;

// In selection Sort we select the min element and replace it with min index element and thus sorting goes on from start index till end index
void selectionSort(int a[], int n){
    // n-1 times iteration required in selection sort
    for (int i = 0; i < n-1; i++)
    {
        // Assume the current position(ith) is min position
        int minIndex = i;
        // Min element in remaining part that's the reason j starts from i+1 
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        swap(a[i], a[minIndex]);    // swap() is an inbuilt function
    }
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
}

int main(){
    int a[] = {3,2,4,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a, n);
    printArray(a, n);
    return 0;
}