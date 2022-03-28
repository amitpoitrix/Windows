#include <iostream>
using namespace std;

// In Bubble Sort swapping of adjacent element takes place for each iteration and sorting starts from end index 
void bubbleSort(int a[], int n){
    bool swapped;
    // first for loop for No. of iteration if size = 5 than 4 no. of iteration is require to sort
    for (int i = 0; i < n-1; i++){
        // inner for loop for no. of swapping require for each ith iteration i.e., n-i-1 times swap
        swapped = false;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
}

int main(){
    int a[] = {5,4,3,2,1};
    int size = sizeof(a)/sizeof(a[0]);
    bubbleSort(a,size);
    printArray(a,size);
    return 0;
}