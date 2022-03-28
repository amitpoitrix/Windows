#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2){
    if (s1.length() == s2.length())
        return s1 < s2;
    return s1.length() > s2.length(); // strings length wise comparison
}

int main(){
    string s0 = "Hello World";
    cout << s0 << endl;

    string s2;
    getline(cin, s2); // This is little different from cin.getline(charVar, size, optional delimeter parameter by default '\n') and it takes a sentence as a input in a string
    cout << s2 << endl;

    // creating an array of string
    string s[10] = {"Apple", "Mango", "Banana", "Orange", "Grapes"};
    int n = 5;
    sort(s,s+n, compare);   // sort() under #include <algorithm>
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }

    // Implementing a Linear Search
    string s3;
    cout << "Enter a fruit to search : ";
    getline(cin,s3);

    int i;
    for ( i = 0; i < 5; i++)
    {
        if(s3 == s[i]){ // we can directly compare two strings
            cout << "Fruit found at index : " << i << endl;
            break;
        }
    }
    if (i==n)
    {
        cout << "Fruit not found";
    }
    
    return 0;
}