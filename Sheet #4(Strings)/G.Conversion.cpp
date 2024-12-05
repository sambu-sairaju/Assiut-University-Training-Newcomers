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
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
        else if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else
            s[i] -= 32;
    }
    cout << s << endl;
    return 0;
}