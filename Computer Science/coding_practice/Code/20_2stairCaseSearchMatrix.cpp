#include <iostream>
using namespace std;

void initMatrix(int a[][10], int R, int C){
    int value = 1;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            a[i][j] = value++;
    }
}

void printMatrix(int a[][10], int R, int C){
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << a[i][j] <<" ";
        cout << endl;
    }
}


// Stair Case Search method to find element in a matrix in O(n) times
void stairCaseSearch(int a[][10], int R, int C, int key){
    int i = 0, j = C-1;
    while(i<R && j>=0){
        if(a[i][j] == key){
            cout << "Element found at " << i <<","<< j;
            return;
        }
        else if(a[i][j] > key)
            j--;
        else
            i++;
    }
    cout << "Element doesnot found ";
    return;
}

int main(){
    int a[10][10];
    int R, C;
    cin >> R >> C;
    initMatrix(a,R,C);
    printMatrix(a,R,C);

    int key;
    cout << "Enter element to be searched ";
    cin >> key;

    stairCaseSearch(a,R,C,key);
    return 0;
}