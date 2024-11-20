#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
            return 0;
        else
        {
            int l = min(n, m);
            int h = max(n, m);
            long long sum = 0;
            for (int i = l; i <= h; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    }
    return 0;
}
