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
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
            s = s.substr(0, i) + " " + s.substr(i + 5, s.length() - i - 4);
    }
    cout << s << "\n";
    return 0;
}