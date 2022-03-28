#include <iostream>
using namespace std;

void prime(int n){
    int i;
    if (n == 2)
    {
        cout << n << " is a prime number" << endl;    
    }
    else{
        for (i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                cout << n << " is not a prime number" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << n << " is a prime number" << endl;
        } 
    }
}

int main(){
    int n;
    cout << "Enter a number to check prime or not" <<endl;
    cin >> n;
    prime(n);
    return 0;
}