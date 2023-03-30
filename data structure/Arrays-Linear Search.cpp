#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N > 0)
    {
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        int M;
        cin >> M;
        bool flag = false;
        for (int i = 0; i < N; i++)
        {
            if (a[i] == M)
            {
                flag = true;
                cout << i << endl;
                break;
            }
        }
        if (flag == false)
        {
            cout << "-1" << endl;
        }
    }
}
