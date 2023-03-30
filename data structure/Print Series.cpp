#include <iostream>
using namespace std;

int main()
{
    int n1, n2, count = 0;
    cin >> n1 >> n2;

    for (int i = 1; count < n1; i++)
    {
        int num = 3 * i + 2;
        if (num % n2 != 0)
        {
            cout << num << endl;
            count++;
        }
    }

    return 0;
}
