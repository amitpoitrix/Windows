#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[10][100];     // act as string s[] array
    int n;
    cin >> n;
    cin.ignore(); //to ignore the enter after n

    for (int i = 0; i < n; i++)
        cin.getline(a[i],100); // each row of the character will be filled
    
    char key[100];
    cout << "Enter a string to be search : ";
    cin.getline(key,100); 
    int i;
    for (i = 0; i < n; i++)
    {
        // to compare two char arrays or strings we use strcmp() function which return 0 if match and is under #include <cstring>
        if(strcmp(key,a[i]) == 0){
            cout << "Found at index : " << i << endl;
            break;
        }
    }
    if (i == n)
        cout << "String not found";
    
    return 0;
}