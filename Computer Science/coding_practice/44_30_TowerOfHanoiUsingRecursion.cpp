#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){
    // Base Condition
    if (n == 0)
        return;
    // rec case
    // Move n-1 disk from src to helper using dest
    towerOfHanoi(n-1, src, helper, dest);

    cout << "Move " << n << " disk from " << src << " to " << dest << endl;
    // Move n-1 disk from helper to dest using src
    towerOfHanoi(n-1, helper, dest, src);
}

int main(){
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}