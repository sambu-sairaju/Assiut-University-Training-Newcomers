#include <bits/stdc++.h>
using namespace std;
void print(int n) {
    for (int i = 1; i < n; i++)
        cout << i << " ";
    cout << n << endl;
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
    int n;
    cin >> n;
    print(n);
    return 0;
}