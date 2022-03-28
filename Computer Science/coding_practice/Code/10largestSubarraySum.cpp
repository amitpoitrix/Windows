#include <iostream>
using namespace std;
// largest subarray sum is the max sum of subarrays
int main(){
    int n;
    int a[10];
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currentSum = 0;
    int maxSum = 0;
    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = 0;
            //Elements of subarrays
            for (int k = i; k <= j; k++)
                currentSum += a[k];
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