#include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout << &a << endl;
    char c = 'A';
    cout << (void *)&c << endl;
    return 0;
}