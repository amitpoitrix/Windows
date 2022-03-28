#include <iostream>
using namespace std;

int kadane(int a[], int n){
    int cs=0, ms=0;
    for (int i = 0; i < n; i++)
    {
        cs += a[i];
        if (cs < 0)
            cs = 0;
        ms = max(cs, ms);
    }
    return ms;
}

void maxCircularSum(int a[], int n){
    int sum1 = kadane(a, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];  // calculating cumulative sum i.e., sum of array
        a[i] = -a[i]; // inverting the array element i.e., changing each array size
    }
    int sum2 = sum + kadane(a, n);  // sum of array - (- maxSubarraySumInvertedArray)
    int result = max(sum1, sum2);
    cout << result << endl;
}

int main(){
    int n, sum = 0;
    int a[10];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    maxCircularSum(a,n);

    return 0;
}