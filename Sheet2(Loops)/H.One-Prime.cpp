#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i, d = 0;
    cin >> x;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            d++;
            break;
        }
    }

    if (d >= 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
