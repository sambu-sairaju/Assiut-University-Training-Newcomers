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
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " : ";
        int c = 1;
        while (i + 1 < s.length() && s[i] == s[i + 1])
        {
            c++;
            i++;
        }
        cout << c << endl;
    }
    return 0;
}