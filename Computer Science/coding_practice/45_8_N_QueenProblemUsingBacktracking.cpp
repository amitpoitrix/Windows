#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n){
    // We can check for column
    for (int row = 0; row < i; row++)
    {
        if (board[row][j] == 1)
            return false;
    }

    //We can check for the left diagonal
    int x = i;
    int y = j;
    while (x>=0 && y>=0)
    {
        if (board[x][y] == 1)
            return false;
        x--;
        y--;
    }
    
    //We can check for the right diagonal
    x = i;
    y = j;
    while (x>=0 && y<n)
    {
        if (board[x][y] == 1)
            return false;
        x--;
        y++;
    }

    // The position is now safe, cols & diagonals
    return true;
}

bool solveNQueen(int board[][10], int i, int n){
    // Base Case
    if (i == n)
    {
        // you have successfully place queen in n rows (0... n-1)
        // print the board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                    cout << "Q ";
                cout << "_ ";
            }
            cout << endl;
        }
        cout << endl;
        
        return false; // returning false in place of true in order to get all possible ans
    }
    
    // Recursive Case
    // Try to place the queen in the current row and call on the remaining part which will solved by recursion
    for (int j = 0; j < n; j++)
    {
        // We have to check if i, j th position is safe to place the queen or not
        if (isSafe(board, i, j, n))
        {
            // place the queen - Assuming i,j is the right position
            board[i][j] = 1;

            bool nextQueenRakhPaye = solveNQueen(board, i+1, n);   // Recursive Call
            if (nextQueenRakhPaye)
                return true;
            
            // Means i, j is not the right position - Assumption is wrong
            board[i][j] = 0; // Backtrack
        }
    }

    // You have tried for all position in the current row but couldn't place a queen
    return false; 
}

int main(){
    int n;
    cin >> n;

    int board[10][10] = {0};
    solveNQueen(board, 0, n);

    return 0;
}