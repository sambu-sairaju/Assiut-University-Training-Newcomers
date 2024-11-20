#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, sum = 0;
        cin >> x >> y;
        int l = min(x, y);
        int r = max(x, y);
        for (int i = l + 1; i < r; i++)
        {
            if (i % 2 == 1)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
