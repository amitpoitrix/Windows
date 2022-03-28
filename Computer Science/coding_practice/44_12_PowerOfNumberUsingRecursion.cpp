#include <iostream>
using namespace std;

// a to the power of b using recursion ; taking O(b) time
int powerOfNum(int a, int b){
    if (b==0)
        return 1;   // Becoz a^0 = 1
    return a*powerOfNum(a, b-1);
}

// Optimized Solution which takes O(log(b))
int fastPower(int a, int b){
    if (b == 0)
        return 1;

    int smallAns = fastPower(a, b/2);
    smallAns *= smallAns;
    // if b is odd
    if (b&1)
        return a*smallAns;
    // if b is even
    return smallAns;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " to the power " << b << " is " << powerOfNum(a, b) << endl;
    cout << a << " to the power " << b << " is " << fastPower(a, b) << endl;
    return 0;
}