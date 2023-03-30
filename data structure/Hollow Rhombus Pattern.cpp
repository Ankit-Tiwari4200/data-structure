#include <bits/stdc++.h>
using namespace std;
void hollowRhombus(int N)
{
    int i, j;
    for (i = 1; i <= N; i++)
    {

        for (j = 1; j <= N - i; j++)
            cout << " ";

        if (i == 1 || i == N)
            for (j = 1; j <= N; j++)
                cout << "*";

        else
            for (j = 1; j <= N; j++)
                if (j == 1 || j == N)
                    cout << "*";
                else
                    cout << " ";

        cout << "\n";
    }
}
void printPattern(int N)
{

    hollowRhombus(N);
}
int main()
{
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}