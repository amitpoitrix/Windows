#include <iostream>
using namespace std;

// Optimized method of determining whether no is prime or not squareRoot(n) method
bool isPrime(int no){
    if (no < 2)
        return false;
    
    for (int i = 2; i*i <= no; i++)
    {
        if (no % i == 0)
            return false;
    }
    return true;
}

int main(){
    int no;
    cin >> no;
    if (isPrime(no))
        cout << "Yes " << no << " is a Prime Number";
    else
        cout << "No " << no << " is not a Prime Number";
    return 0;
}
