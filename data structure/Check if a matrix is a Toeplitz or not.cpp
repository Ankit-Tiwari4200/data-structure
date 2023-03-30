#include <iostream>
using namespace std;

bool isToeplitzMatrix(int **matrix, int rows, int cols)
{
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] != matrix[i - 1][j - 1])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    if (isToeplitzMatrix(matrix, rows, cols))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
