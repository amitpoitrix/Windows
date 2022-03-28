#include <iostream>
using namespace std;

// Decreasing Recursive Function where value is printed before recursive call
void dec(int n){
    if (n == 0)
        return;
    cout << n << " ";
    dec(n-1);
}

// Increasing Recursive Function where value is printed after recursive call
void inc(int n){
    if (n == 0)
        return;
    inc(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    dec(n);
    cout << endl;
    inc(n);
    return 0;
}