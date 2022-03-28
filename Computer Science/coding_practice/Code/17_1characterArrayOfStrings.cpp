#include <iostream>
using namespace std;

int main(){
    char a[10][100];    // act as string s[] array
    int n;
    cin >> n;
    cin.ignore(); //to ignore the enter after n

    for (int i = 0; i < n; i++)
    {
        cin.getline(a[i],100); // each row of the character will be filled
    }

    // write bubble sort on 2D array of string to sort it
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl; 
    }
    
    return 0;
}