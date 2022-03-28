#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int ans;
    ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    cout << factorial(5) <<endl;
    cout << ncr(5,2) <<endl;
    return 0;
}