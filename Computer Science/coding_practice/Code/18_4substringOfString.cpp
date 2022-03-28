#include <iostream>
using namespace std;

// Substring : Any consecutive (or continuous) sub-segment
// eg : "abc"
// a
// ab
// abc
// b
// bc
// c
// ac will not be substring of string becoz it is non-continuous

void printSubstrings(char *a){
    // using 2 loops for all values of i and j
    for (int i = 0; a[i] != '\0'; i++)
    {
        // for every i, j will start from i till end
        for (int j = i; a[j] != '\0'; j++){
            // Printing all chars from i to j
            for (int k = i; k <= j; k++)
                cout << a[k];
            cout << endl;
        }
    }
}

int main(){
    char a[] = "abc";
    printSubstrings(a);
    return 0;
}