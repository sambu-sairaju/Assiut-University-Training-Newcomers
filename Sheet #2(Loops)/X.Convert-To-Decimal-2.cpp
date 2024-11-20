#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;

        while (n > 0)
        {
            if (n % 2 == 1)
                c++;
            n = n / 2;
        }
        // cout << c << endl;
        int r = 0;
        for (int i = 0; i <= c - 1; i++)
        {
            r = r + pow(2, i);
        }
        cout << r << endl;
    }
    return 0;
}
