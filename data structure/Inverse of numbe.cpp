#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long inverse = 0;
    int i = 1;

    while (n > 0)
    {
        int digit = n % 10;
        inverse += i * pow(10, digit - 1);
        i++;
        n /= 10;
    }

    cout << inverse << endl;

    return 0;
}
