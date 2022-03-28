#include <iostream>
using namespace std;

// GCD of two no. using Euclid's Algorithm
int gcd(int a, int b){
    // Base Condition
    if (b == 0)
        return a;
    // Recursive Condition
    return gcd(b, a%b);
}

// gcd(a,b) * lcm(a,b) = a*b
int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    cout << gcd(10,15) << endl;
    cout << gcd(10,2) << endl;

    cout << lcm(10,15) << endl;
    cout << lcm(10,2) << endl;

    return 0;
}