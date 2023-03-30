#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int order = 0;
    while (temp > 0)
    {
        temp /= 10;
        order++;
    }
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, order);
        temp /= 10;
    }
    return (sum == n);
}

int main()
{
    int n;
    cin >> n;
    cout << (isArmstrong(n) ? "true" : "false") << endl;
    return 0;
}
