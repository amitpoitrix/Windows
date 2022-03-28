#include <iostream>
using namespace std;

int main(){
    //char c[10];
    //cin >> c;
    //cout << c << endl;

    char a[100];
    cin.getline(a, 100, '.'); // ended when encounter dot(.)
    cout << a << endl;
    return 0;
}