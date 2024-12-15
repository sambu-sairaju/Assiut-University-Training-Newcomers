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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i <= s.length() - 3; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                cout << "Good" << endl;
                flag = 1;
                break;
            }
            else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                cout << "Good" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Bad" << endl;
    }
    return 0;
}