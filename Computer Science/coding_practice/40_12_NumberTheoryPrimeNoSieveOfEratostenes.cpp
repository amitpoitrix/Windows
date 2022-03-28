#include <iostream>
using namespace std;

// Prime No orinting using sieve of eratostenes
void primeSieve(int *p, int n){
    p[0] = p[1] = 0;
    p[2] = 1;

    // Let's mark all odd number as prime(initialization)
    for (int i = 3; i <= n; i+=2)
    {
        p[i] = 1;
    }

    // Sieve logic to mark all non-prime odd no. as 0
    // 1. Optimization : Iterate only over odd numbers
    for (int i = 3; i <= n; i+=2)
    {
        if (p[i])
        {
            // Mark all the multiples of that number as not prime
            // 2. Optimization : Take a jump of 2i starting from i*i
            for (int j = i*i; j <= n; j+=2*i)
            {
                p[j] = 0;
            }
        }
    }
    return;
}

int main(){
    int n = 1000;
    int p[n] = {0};
    primeSieve(p, 100);
    for (int i = 0; i <= 100; i++)
    {
        if (p[i])
            cout << i << " ";
    }
    return 0;
}