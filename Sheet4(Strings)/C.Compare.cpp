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
    string x, y;
    cin >> x >> y;
    if (x < y)
        cout << x << endl;
    else
        cout << y << endl;
    return 0;
}