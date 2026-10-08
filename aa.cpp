#include <iostream>
using namespace std;

int board[20][20];

bool safe(int row, int col, int n)
{
    for(int i = 0; i < row; i++)
        if(board[i][col])
            return false;

    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if(board[i][j])
            return false;

    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if(board[i][j])
            return false;

    return true;
}

bool nqueen(int row, int n)
{
    if(row == n)
        return true;

    for(int col = 0; col < n; col++)
    {
        if(safe(row, col, n))
        {
            board[row][col] = 1;

            if(nqueen(row + 1, n))
                return true;

            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    if(nqueen(0, n))
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(board[i][j])
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution";
    }

    return 0;
}