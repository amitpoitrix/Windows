#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// shuffle() for Randomized Quick Sort 
void shuffle(int a[], int s, int e){
    srand(time(NULL));
    int i,j;
    for (i = e; i >= 0; i--)
    {
        //create random index
        j = rand()%(i+1);
        swap(a[i], a[j]);
    }
}

// Quick Sort working on Divide & Conquer sorting algorithm 
int partition(int a[], int s, int e){
    // Selecting the last element of array as pivot element
    int pivot = a[e];
    int i = s-1;  // taking i as pointer with value 1 below s
    int j = s;  // taking j as pointer which traverse the array from s to e-1

    for (; j < e; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);   // swapping the smallest element with larger element
        }
    }
    // Bringing the pivot element to its sorted position
    swap(a[i+1], a[e]);
    return i+1;
}

void quickSort(int a[], int s, int e){
    // Base condition for 0 or 1 element
    if (s >= e)
        return;

    // Getting the Pivot element position by calling the partition()
    int p = partition(a, s, e);
    // for left part
    quickSort(a, s, p-1);
    // for right part
    quickSort(a, p+1, e);
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    // calling shuffle()
    shuffle(a, 0, n-1); 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    cout << endl;

    // calling quickSort() function
    quickSort(a, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    
    return 0;
}