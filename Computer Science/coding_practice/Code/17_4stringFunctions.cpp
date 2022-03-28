#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// compare() to compare two string and can be used in sort() to arrange the string array accordingly
bool compare(string a, string b){
    //return a.length()>b.length();  // Decreasing order of their length
    return a > b;  // lexical order i.e., Alphabetical order
}

int main(){
    string s("Hello World");
    cout << s << endl;

    //char s2[] = "another way !!";
    string s2 = "another way !!";
    cout << s2 << endl;
    cout << s2.length() << endl;   // stringVar.length() for getting no. of character in a given string
    //cout << sizeof(s2) << endl;  // sizeof(charVar) for getting character array size which is 1 extra as compare to string length due to '\0' character

    //for iterating over string character
    for (int i = 0; i < s2.length(); i++)
    {
        cout << s2[i] << "-";
    }
    cout << endl;

    string s3;
    getline(cin,s3);        // getline(cin, stringVariable)  for getting string input which is different from cin.getline(variable,size,optional delimeter parameter)
    cout << s3 << endl;
    
    string s4[] = {"Guava", "Banana", "Mango","Pineapple" ,"Apple"};
    sort(s4, s4+5, compare);         // sort() from algorithm header i.e., #include <algorithm>
    // for iterating over string array
    for (int i = 0; i < 5; i++)
    {
        cout << s4[i] << ",";
    }
    cout << endl;
    

    return 0;
}