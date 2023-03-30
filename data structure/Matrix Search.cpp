#include <iostream>
using namespace std;

int search_sorted_matrix(int matrix[][100], int n, int m, int target)
{
    int row = 0, col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
            return 1;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int matrix[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    cout << search_sorted_matrix(matrix, n, m, target) << endl;

    return 0;
}