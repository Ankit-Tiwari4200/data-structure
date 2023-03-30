#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << lcm(n1, n2) << endl;
    return 0;
}
