#include <iostream>
using namespace std;

int linearSearch(int a[], int i, int n, int key){
    // Base Condition
    if (i == n)
        return -1;
    if (a[i] == key)
        return i;
    return linearSearch(a, i+1, n, key); // while recursive call size will reamin same
}

int main(){
    int a[] = {4,3,8,6,5,1};
    int n = sizeof(a)/sizeof(int);
    int key = 1;
    cout << linearSearch(a, 0, n, key) << endl;
    return 0;
}