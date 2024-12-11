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
    int q;
    string s, o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    cin >> q >> s;
    if (q == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                cout << k[s[i] - 'A' + 26];
            else if (s[i] >= 97 && s[i] <= 122)
                cout << k[s[i] - 'a'];
            else
                cout << k[s[i] - '0' + 52];
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < k.length(); j++)
            {
                if (s[i] == k[j])
                {
                    cout << o[j];
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}