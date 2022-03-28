#include <iostream>
using namespace std;

// In Unique Number II ques input is wrong
void findUnique2(int a[], int n){
    // initializing result variable with 0
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ a[i];  // XORing all elements of array so that repeated element got cancelled out and unique no. XOR stores in res
    }

    // For calculating mask
    int temp = res; // assigning value of res to temp so as to use res value in further process
    int i = 0;  // so as to track the position set bit of temp
    while (temp > 0)
    {
        // checking set bit from rightmost side of temp if found than break the while loop with value of i
        if (temp&1)
            break;
        temp = temp >> 1;  // If set bit not found than check for next value of temp by right shifting temp value by 1
        i++;   // incrementing i so as to check for next position value of temp
    }
    int mask = 1<<i;  // After above while() loop creating mask by left shifting 1 with value of i
    
    int firstNo = 0;
    for (int i = 0; i < n; i++)
    {
        // Checking the elements in a[] whose rightmost set bit or mask set bit doesn't equals to 0
        if ((mask&a[i]) != 0)
            firstNo = firstNo ^ a[i];
    }

    int secondNo = res ^ firstNo;  // for getting the secondNo XORing res with firstNo

    cout << "First Number : " << firstNo << endl;
    cout << "Second Number : " << secondNo << endl;
}

int main(){
    int a[] = {1,2,3,4,5,6,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    // calling function
    findUnique2(a, n);

    return 0;
}