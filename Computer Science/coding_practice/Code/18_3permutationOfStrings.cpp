#include <iostream>
#include <cstring>
using namespace std;

// two strings are permutations or not, condition:
// 1. Length of both the string should be equal
// 2. Frequency of characters of each string should be same and order doesn't matter

bool isPermutation(char *s1, char *s2){
    // getting the length of each string using strlen(characterArrayVar) function under #include <cstring>
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    // First condition of permutation i.e., length should be equal
    if(l1 != l2){
        return false;
    }
    // creating frequency array of size 26 and initialize it to 0 as a-z characters are taken into considerations
    int freq[26] = {0};
    // Incrementing freq of each character present in given string s1
    for (int i = 0; i < l1; i++)
    {
        freq[s1[i]-'a']++;
    }

    // Decrementing freq of each character present in given string s2
    for (int i = 0; i < l2; i++)
    {
        freq[s2[i]-'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true; 
}

int main(){
    char s1[100], s2[100];
    cin >> s1 >> s2;
    if (isPermutation(s1,s2))
        cout << "Both strings are permutations of each other";
    else
        cout << "Strings are not permutations of each other";
    
    return 0;
}