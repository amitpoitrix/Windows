#include <iostream>
#include <cstring>
using namespace std;

#define ll long long

int main(){
    char a[20];
    cin >> a;

    int len = strlen(a);
    ll ans = 0;

    ans = (1<<len)-2; // 2^n - 2 -> sum of n terms of G.P i.e., sum of all the lucky no. less that original no. of digits, that's the first part of the ans

    // Now the 2nd part of the ans
    // Iterate over the number from units place, and add the comtribution of 7
    for (int i = len-1, pos = 0; i >= 0; i--, pos++)
    {
        if (a[i] == '7')
            ans += (1<<pos);
    }
    cout << ans+1 << endl;
    return 0;
}