#include <iostream>
using namespace std;

int computeBits(int n){
    int ans = 0; // here, ans is nothing but no. of iteration or jumps that hulk take to reach  that nth level
    while (n>0)
    {
        ans++;  // increasing ans for each iteration
        n = n&(n-1);
    }
    return ans;
}

int main(){
    // first it will take t as no. of test case and n as input for each test case
    int t, n;  // input t = 3, n= 7 8 9
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << computeBits(n) << endl;   // Output = 3 1 2
    }
    

    return 0;
}