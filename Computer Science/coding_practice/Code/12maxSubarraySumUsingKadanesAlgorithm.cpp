#include <iostream>
using namespace std;
// max subarray sum using kadane's algorithm which will take only one loop
int main(){
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cs = 0;   // cs - currentSum
    int ms = 0;   // ms - maxSum
    for (int i = 0; i < n; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
            cs = 0;
        ms = max(cs,ms);   // max(para1, para2) inbuilt function to return max among para1 & para2
    }
    cout << "Maximum Sum : " << ms << endl; 
    return 0;
}