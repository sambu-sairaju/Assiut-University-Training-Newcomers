#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() <= 10)
            cout << s << endl;
        else
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }
    return 0;
}