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
    int n;
    string s, t;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (t.empty() || t.back() != s[i])
        {
            char c = s[i];
            t.push_back(c);
        }
    }
    cout << t.length() << endl;
    return 0;
}