#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << '\\';
            else if ((i + j) == (n + 1))
                cout << '/';
            else
                cout << '*';
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == (n / 2) + 1)
            cout << 'X';
        else
            cout << '*';
    }
    cout << endl;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == (n / 2) + 1 + i)
                cout << '\\';
            else if ((i + j) == (n / 2 + 1))
                cout << '/';
            else
                cout << '*';
        }
        cout << endl;
    }
    return 0;
}