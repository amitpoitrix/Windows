#include <iostream>
using namespace std;
// largest subarray sum optimized method here we use two nested loops and use the concept of cumulative sum i.e., precomputing 
int main(){
    int n;
    int a[10];
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    // initializing cumulative sum cs array with all elements 0 value
    int cs[10] = {0};
    cout << "Enter the elements of the array : " << endl;
    // initializing first element of cs array
    cin >> a[0];
    cs[0] = a[0];  // initializing the cs array with first element of the original array
    // so now for loop iteration starts from 1
    for (int i = 1; i < n; i++){
        cin >> a[i];
        cs[i] = cs[i-1] + a[i];  // populating each index value of cs array with cumulative sum value from original array
    }

    int currentSum = 0;
    int maxSum = 0;
    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = 0;
            currentSum = cs[j] - cs[i-1];      // logic for getting sum of subarrays
            // getting max sum among all subarrays
            if (currentSum > maxSum){
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    cout << "Maximum sum of subarrays : " << maxSum << endl;
    // printing the subarrays having max sum
    for (int k = left; k <= right; k++)
        cout << a[k] << ",";
    
    return 0;
}