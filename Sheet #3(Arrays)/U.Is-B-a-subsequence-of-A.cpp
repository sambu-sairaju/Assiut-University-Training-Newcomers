#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000], b[10000], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[p] == a[i])
        {
            p++;
        }
    }
    if (p == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}