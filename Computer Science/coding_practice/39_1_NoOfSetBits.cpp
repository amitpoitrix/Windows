#include <iostream>
#include <cstring>
using namespace std;


// 1. Calculating no. of set bits in a given number i.e, no. of 1s
// this countBits() will take time O(no. of bits)
int countBits(int n){
    int count = 0;
    while (n>0)
    {
        count += n&1;
        n = n>>1;
    }
    return count;
}


// 2. countBitsFast() will take time O(no. of setbits)
int countBitsFast(int n){
    int count = 0;
    while(n){
        count++;
        n = n & (n-1);
    }
    return count;
}


// 3. Getting ith bit
int gettingIthBit(int n, int i){
    return (n & (1<<i)) != 0?1:0;
}


// 4. change ith bit of no to 1, here notice the arguement &n
void settingIthBit(int &n, int i){
    int mask = 1<<i;
    n = (n|mask);
}


// 5. clear the ith bit of no. to 0
void clearBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}


// 6. Generate all subset of string using bitmasking ; eg: string : 'abc', subset : a,b,c,ab,bc,ca,abc
void filterChars(char a[], int no){
    // a = 'abc' no = 5 -- Output should be 'ac'
    int i = 0;
    while(no>0){
        (no&1) ? cout<<a[i] : cout <<"";
        no = no >> 1;
        i++;
    }
    cout << endl;
}

void generateSubsets(char a[]){
    // Generate a range of numbers from 0 to 2^n-1
    int n = strlen(a);
    int range = (1<<n)-1;
    for (int i = 0; i <= range; i++)
    {
        filterChars(a, i);
    }
}


int main(){
    char a[10];
    cin >> a;
    generateSubsets(a);

    //int n;
    //int i;
    //cin >> n >> i;

    //clearBit(n, i);  // input 13 2
    //cout << n << endl;  // Output 9

    //settingIthBit(n, i);  // calling the function instead of printing as function doesn't return anything ; input 13 1
    //cout << n << endl; // After calling above function printing n to check whether changes occur or not ; output 15

    //cout << gettingIthBit(n, i) << endl; 

    //cout << countBits(n) << endl;
    //cout << countBitsFast(n) << endl;

    return 0;
}