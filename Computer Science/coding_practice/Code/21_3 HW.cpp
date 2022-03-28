#include <iostream>
using namespace std;

void initMatrix(char a[][10], int n){
   int startRow = 0, endRow = n-1, startCol = 0, endCol = n-1;
   while(startRow <= endRow && startCol <= endCol){
       if (startRow & 1)
       {
            // for startRow
            for (int j = startCol; j <= endCol; j++)
                a[startRow][j] = 'X';
            startRow++;
       
            // for endCol
             for (int i = startRow; i <= endRow; i++)
                a[i][endCol] = 'X';
            endCol--;

            // for endRow
            if (startRow < endRow)
            {
                for (int j = endCol; j >= startCol; j--)
                    a[endRow][j] = 'X';
                endRow--;
            }
       
            // for startCol
            if (startCol < endCol)
            {
                for (int i = endRow; i >= startRow; i--)
                    a[i][startCol] = 'X';
                startCol++;
            }
       }
       else{
           // for startRow
            for (int j = startCol; j <= endCol; j++)
                a[startRow][j] = 'O';
            startRow++;
       
             // for endCol
            for (int i = startRow; i <= endRow; i++)
                a[i][endCol] = 'O';
            endCol--;

            // for endRow
            if (startRow < endRow)
            {
                for (int j = endCol; j >= startCol; j--)
                    a[endRow][j] = 'O';
                endRow--;
            }
       
            // for startCol
            if (startCol < endCol)
            {
                for (int i = endRow; i >= startRow; i--)
                    a[i][startCol] = 'O';
                startCol++;
            }
       }
   }
}

void printMatrix(char a[][10], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] <<" ";
        cout << endl;
    }
}

int main(){
    char a[10][10];
    int n;
    cout << "Enter value of N : ";
    cin >> n;
    initMatrix(a, n);
    printMatrix(a, n);
    return 0;
}