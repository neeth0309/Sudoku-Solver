#include <bits/stdc++.h>
using namespace std;

bool InRow(int mat[9][9], int row, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (mat[row][i] == num)
            return true;
    }
    return false;
}

bool InColumn(int mat[9][9], int col, int num)
{
    for (int j = 0; j < 9; j++)
    {
        if (mat[j][col] == num)
            return true;
    }
    return false;
}

bool InGrid(int mat[9][9], int row, int col, int num)
{
    int startRow = row - (row % 3);
    int startCol = col - (col % 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[startRow + i][startCol + j] == num)
                return true;
        }
    }
    return false;
}

bool solveSudoku(int mat[9][9])
{
    int i, j;
    bool empty = false;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (mat[i][j] == 0)
            {
                empty = true;
                break;
            }
        }
        if (empty)
            break;
    }
    if (!empty)
        return true;

    for (int num = 1; num <= 9; num++)
    {
        if (!InRow(mat, i, num) && !InColumn(mat, j, num) && !InGrid(mat, i, j, num))
        {
            mat[i][j] = num;

            if (solveSudoku(mat))
            {
                return true;
            }

            mat[i][j] = 0;
        }
    }
    return false;
}

void printMatrix(int mat[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat[9][9];

    cout << "Enter your initial Sudoku grid. Use zeroes for empty cells:" << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] < 0 || mat[i][j] > 9)
            {
                cout << "Invalid number. Enter a number between 1 and 9." << endl;
                j--;
            }
        }
    }

    if (solveSudoku(mat))
    {
        cout << "Solved Sudoku grid:" << endl;
        printMatrix(mat);
    }
    else
    {
        cout << "No solution exists for this Sudoku." << endl;
    }

    return 0;
}
