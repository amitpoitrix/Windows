#include <iostream>
using namespace std;

int sumOfArray(int A[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i];
    return sum;
}

int main(){
    int a[] = {1,2,88,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = sumOfArray(a,n);
    cout <<"Sum is : " << sum << endl;
    return 0;
}