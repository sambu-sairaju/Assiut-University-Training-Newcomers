#include <bits/stdc++.h>
using namespace std;
long long solve(int x, int n)
{
    long long s = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += pow(x, i);
        }
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x, n;
    cin >> x >> n;
    long long s = solve(x, n);
    cout << s << endl;
    return 0;
}