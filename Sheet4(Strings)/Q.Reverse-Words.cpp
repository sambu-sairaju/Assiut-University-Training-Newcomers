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
    string s, t;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            t += s[i];
        }
        else
        {
            reverse(t.begin(), t.end());
            cout << t << " ";
            t = "";
        }
    }
    if (!t.empty())
    {
        reverse(t.begin(), t.end());
        cout << t << endl;
    }
    else
        cout << endl;
    return 0;
}