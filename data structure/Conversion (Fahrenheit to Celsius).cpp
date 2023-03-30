#include <iostream>
using namespace std;

int main()
{
    int minF, maxF, step;
    cin >> minF >> maxF >> step;

    for (int i = minF; i <= maxF; i += step)
    {
        int celsius = (5 * (i - 32)) / 9;
        cout << i << "\t" << celsius << endl;
    }

    return 0;
}
