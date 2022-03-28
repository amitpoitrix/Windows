#include <iostream>
using namespace std;

// Global 2D character array to print no. in words
char printWord[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printNum(int n){
    if (n == 0)
        return;
    printNum(n/10);  // for reducing the no. from left to right
    cout << printWord[n%10] << " ";  // for printing the no. after completion of every recursive call ; n%10 gives the last no.
}

int main(){
    int n;
    cin >> n;
    printNum(n);
    return 0;
}