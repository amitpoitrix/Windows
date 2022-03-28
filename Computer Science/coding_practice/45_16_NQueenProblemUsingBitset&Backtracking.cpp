#include <iostream>
#include <bitset>
using namespace std;

// This code working on online compiler as its raising some error here

// bitset data type comes under #include <bitset> & here it consist of 30 box with each box size as 1 bit not 1 byte that'll be in case of bool array
bitset<30> col, d1, d2;

void solveNQueenBitset(int r, int n, int &ans){
    // Base Case
    if (r == n)
    {
        ans++;
        return;
    }
    
    // Recursive Case
    for (int c = 0; c < n; c++)
    {
        if (!col[c] && !d1[r-c+n-1] && !d2[r+c])
        {
            col[c] = d1[r-c+n-1] = d2[r+c] = 1;
            solveNQueenBitset(r+1, n, ans);  // Recursive Call for next row
            col[c] = d1[r-c+n-1] = d2[r+c] = 0;  // Backtracking after every recursive call
        }
    }
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    solveNQueenBitset(0, n, ans);
    cout << ans << endl;

    return 0;
}