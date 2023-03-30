#include <iostream>
using namespace std;

int gcd(int N1, int N2)
{
    int result = min(N1, N2);
    while (result > 0)
    {
        if (N1 % result == 0 && N2 % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    cout << gcd(N1, N2);
    return 0;
}