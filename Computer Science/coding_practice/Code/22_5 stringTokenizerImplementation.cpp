#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char str[], char delim){
    //creating static character pointer variable that holds the value throughout the program
    static char *input = NULL;
    if (str != NULL)
        input = str;

    if (input == NULL)
        return NULL;
    
    //creating dynamic character pointer that'll return word
    char *output = new char[strlen(input)+1]; // +1 for '\0' or NULL character at the end

    // Return a dynamically allocated word array from my function
    // Read the word from input and I'll store it in output and just return the word till delimiter

    int i;
    for ( i = 0;input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            // copy the char into output array
            output[i] = input[i];
        }
        else{
            // you are at a delim
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    // Return the last word even if the delim is not there
    output[i] = '\0';
    input = NULL;
    return output;

}

int main(){
    char str[] = "Hello, you all, now you are gentlemen cadets";
    char *ptr;
    ptr = mystrtok(str,',');
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = mystrtok(NULL,',');
    }
    
    return 0;
}