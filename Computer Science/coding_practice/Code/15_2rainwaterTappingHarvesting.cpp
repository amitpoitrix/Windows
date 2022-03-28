#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[10];
    int left[10] = {0}; 
    int right[10] = {0};

    for (int i = 0; i < n; i++)
        cin >> a[i]; 

    left[0] = a[0];
    right[n-1] = a[n-1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1],a[i]);
        
        right[n-i-1] = max(right[n-i], a[n-i-1]); 
    }
    
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += (min(left[i], right[i]) - a[i]);
    }
    cout << result << endl;
    
    return 0;
}