#include <iostream>
using namespace std;

// Mapping of Keypad from 0 to 9
char keypad[][10] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printKeypadString(char in[], char out[], int i, int j){
    // Base Case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << ",";
        return;
    }
    
    // Rec Case
    int digit = in[i] - '0';   // Becoz in[i] is char which will store ASCII value to variable digit so as to get int value we have to subtract it with '0'
    if (digit == 0 || digit == 1)
        printKeypadString(in, out, i+1, j);
    
    for (int k = 0; keypad[digit][k] != '\0'; k++)
    {
        out[j] = keypad[digit][k];
        printKeypadString(in, out, i+1, j+1);
    }
}

int main(){
    char in[100];
    char out[100];
    cin >> in;
    printKeypadString(in, out, 0, 0);

    return 0;
}