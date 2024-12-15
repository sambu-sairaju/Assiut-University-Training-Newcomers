#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long ans = 1, i;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            ans *= i;
        }
        cout << ans << endl;
    }
    return 0;
}
