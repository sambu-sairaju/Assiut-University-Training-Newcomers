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
    string s, r;
    cin >> s;
    r = s;
    reverse(r.begin(), r.end());
    if (s == r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}