#include <bits/stdc++.h>
using namespace std;
pair<int, int> solve(int a[], int n)
{
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
            mini = a[i];
        if (a[i] > maxi)
            maxi = a[i];
    }
    return {mini, maxi};
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, a[1000], s[2];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    pair<int, int> result = solve(a, n);
    cout << result.first << " " << result.second << endl;
    return 0;
}