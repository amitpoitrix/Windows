#include <iostream>
using namespace std;

void prime(int n){
    int i;
    if (n == 2)
        cout << n << endl;    
    else{
        for (i = 2; i < n; i++)
        {
            if (n%i == 0)
                break;
        }
        if (i == n)
            cout << n << endl;
    }
}

void primeRange(int num){
    for (int i = 2; i <= num; i++)
        prime(i);
}

int main(){
    int n;
    cout << "Enter a number to which you want prime number" <<endl;
    cin >> n;
    cout << "Prime Numbers upto "<< n <<" are :"<< endl;
    primeRange(n);
    return 0;
}