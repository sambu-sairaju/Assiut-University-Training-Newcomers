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
    int n, score = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'V')
            score += 5;
        else if (s[i] == 'W')
            score += 2;
        else if (i != s.length() - 1 && s[i] == 'X')
            i++;
        else if (i != s.length() - 1 && s[i] == 'Y')
        {
            s += s[i + 1];
            i++;
        }
        else if (i != s.length() - 1 && s[i] == 'Z')
        {
            if (s[i + 1] == 'V')
            {
                score /= 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                score /= 2;
                i++;
            }
        }
    }
    cout << score << endl;
    return 0;
}