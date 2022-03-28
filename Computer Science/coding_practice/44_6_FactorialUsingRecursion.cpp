#include <iostream>
using namespace std;

int fact(int n){
    //Base Condition
    if (n == 0)
        return 1;
    // Recusrsive Condition
    int ans = n * fact(n-1);
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}