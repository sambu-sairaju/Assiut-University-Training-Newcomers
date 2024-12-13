#include <bits/stdc++.h>
using namespace std;
void Add(int x, int y)
{
    cout << x + y << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x, y;
    cin >> x >> y;
    Add(x, y);
    return 0;
}