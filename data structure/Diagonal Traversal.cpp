#include <iostream>
#include <vector>

std::vector<int> diagonalOrder(std::vector<std::vector<int>> matrix)
{
    if (matrix.empty())
    {
        return {};
    }
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0, j = 0, d = 1;
    std::vector<int> res;
    for (int k = 0; k < m * n; k++)
    {
        res.push_back(matrix[i][j]);
        if ((i + j) % 2 == 0)
        { // moving up
            if (j == n - 1)
            {
                i++;
            }
            else if (i == 0)
            {
                j++;
            }
            else
            {
                i--;
                j++;
            }
        }
        else
        { // moving down
            if (i == m - 1)
            {
                j++;
            }
            else if (j == 0)
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
    }
    return res;
}

int main()
{
    int m, n;
    std::cin >> m >> n;
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    std::vector<int> result = diagonalOrder(matrix);
    for (auto i : result)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}