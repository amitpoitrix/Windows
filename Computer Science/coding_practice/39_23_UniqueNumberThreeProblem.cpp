#include <iostream>
using namespace std;

// Unique Number 3 Problem : Find unique no among group of elements in which each element repeat 3 times except one element find that element
int findUnique(int a[], int n){
    // Extract bits of every number and update the count array
    int cnt[64] = {0}; 
    for (int i = 0; i < n; i++)
    {
        int no = a[i];
        int j = 0;
        while (no > 0)
        {
            cnt[j] += (no & 1);
            no = no >> 1;
            j++;
        }
    }

    // mod of cnt[] with 3 to get the unique element
    int p = 1; // p -> power of 2 i.e., p=1 means 2^0 = 1
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
        ans += cnt[i]*p;  // Multiply each element with power of 2 from 0 to 63 i.e., 2^0 to 2^63
        p = p << 1; // p = p*2
    }
    return ans;
}

int main(){
    int a[] = {3,3,7,6,12,7,7,6,6,3};
    int n = sizeof(a)/sizeof(int);
    // calling function findUnique
    cout << findUnique(a, n);

    return 0;
}