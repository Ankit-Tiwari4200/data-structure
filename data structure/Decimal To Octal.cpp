#include <iostream>
using namespace std;

int main()
{
    int decimal, octal = 0, i = 1;

    cin >> decimal;

    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    cout << octal;

    return 0;
}
