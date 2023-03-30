#include <iostream>
using namespace std;

int main()
{

    int N, reversed_number = 0, remainder;

    cin >> N;

    while (N != 0)
    {
        remainder = N % 10;
        reversed_number = reversed_number * 10 + remainder;
        N /= 10;
    }

    cout << reversed_number;

    return 0;
}