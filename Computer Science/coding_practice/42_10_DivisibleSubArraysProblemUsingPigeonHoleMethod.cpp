#include <iostream>
#include <cstring>
using namespace std;

#define ll long long

ll a[1000005], prefixSum[1000005];

// Divisible Subarrays using PigeonHole Application
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        // initializing every element of prefixSum[] to 0
        // memset(arrayName, value, size of array) used to initialize each element of prefixSum[] with constant value ; comes under #include <cstring> 
        memset(prefixSum, 0, sizeof prefixSum);
        prefixSum[0] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sum %= n;
            sum = (sum+n)%n; // for modulus of -ve value of a[i], as |a[i| <= 10^9
            prefixSum[sum]++;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll no = prefixSum[i];
            ans += (no*(no-1))/2; // we have to compute nC2 = n!/(2!*(n-2)!)
        }
        cout << ans << endl;
    }
    return 0;
}