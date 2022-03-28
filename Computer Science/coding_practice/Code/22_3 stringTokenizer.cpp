#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = "Hi, I am a, Gentlemen ,Cadet";
    char *ptr;
    ptr = strtok(str," ");     // strtok() function comes under #include <cstring>
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = strtok(NULL," ");
    }
    

    return 0;
} 