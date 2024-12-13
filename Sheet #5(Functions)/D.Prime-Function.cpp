#include <bits/stdc++.h>
using namespace std;
void is_prime(int n)
{
    int cnt = 0;
    if (n <= 1)
        cout << "NO" << endl;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                cnt++;
        }
        if (cnt > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        is_prime(n);
    }
    return 0;
}