#include <iostream>
using namespace std;
int fahrenheit_to_celsius(int f){
    // c = (f-32)*5/9
    int c;
    c = (f-32)*5/9;
    return c;
}

int main(){
    int n;
    cout << "Enter the degree in fahrenheit" << endl;
    cin >> n;
    cout << "fahrenheit_to_celsius conversion : " << fahrenheit_to_celsius(n) <<endl;
    return 0;
}