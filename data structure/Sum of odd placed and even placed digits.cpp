#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int even_sum = 0, odd_sum = 0;
    int pos = 1;

    while (n != 0)
    {
        int digit = n % 10;

        if (pos % 2 == 0)
        {
            even_sum += digit;
        }
        else
        {
            odd_sum += digit;
        }

        n /= 10;
        pos++;
    }

    cout << odd_sum << endl;
    cout << even_sum << endl;

    return 0;
}
