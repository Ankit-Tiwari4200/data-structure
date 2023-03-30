#include <iostream>
using namespace std;

void print_spiral(int matrix[][100], int N, int M)
{
    int start_row = 0, end_row = N - 1, start_col = 0, end_col = M - 1;
    while (start_row <= end_row && start_col <= end_col)
    {

        for (int j = start_col; j <= end_col; j++)
        {
            cout << matrix[start_row][j] << ", ";
        }
        start_row++;

        for (int i = start_row; i <= end_row; i++)
        {
            cout << matrix[i][end_col] << ", ";
        }
        end_col--;

        if (start_row <= end_row)
        {
            for (int j = end_col; j >= start_col; j--)
            {
                cout << matrix[end_row][j] << ", ";
            }
            end_row--;
        }

        if (start_col <= end_col)
        {
            for (int i = end_row; i >= start_row; i--)
            {
                cout << matrix[i][start_col] << ", ";
            }
            start_col++;
        }
    }
    cout << "END";
}

int main()
{
    int N, M;
    cin >> N >> M;

    int matrix[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    print_spiral(matrix, N, M);

    return 0;
}
