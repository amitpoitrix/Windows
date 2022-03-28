#include <iostream>
using namespace std;

int main(){
    // Here we'll take character array to store the numbers which don't require loop to take input values
    char a[50];
    cin >> a;
    int i=0;
    // if first number is 9 so we just skipping it as number should not start with 0
    if (a[i] == '9')
        i++;
    
    for (; a[i] != '\0'; i++)
    {
        int digit = a[i] - '0';   // for converting the char number to int number
        if (digit >= 5)
        {
            digit = 9-digit;
            a[i] = digit + '0';   // coverting back int number to char
        }
    }
    cout << "Smallest possible number after inverting the digit : " << a << endl;
    return 0;
}