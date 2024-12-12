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
    string s, temp, x, y, smallest;
    cin >> s;
    int n = s.length();
    smallest = s;
    for (int i = 1; i < n; i++)
    {
        x = s.substr(0, i);
        sort(x.begin(), x.end());
        y = s.substr(i, n - i);
        sort(y.begin(), y.end());
        temp = x + y;
        smallest = min(smallest, temp);
    }
    cout << smallest << "\n";
    return 0;
}