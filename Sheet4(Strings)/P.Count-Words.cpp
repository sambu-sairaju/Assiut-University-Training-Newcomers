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
    int count = 0;
    bool flag = false;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            flag = true;
        }
        else
        {
            if (flag)
            {
                count++;
                flag = false;
            }
        }
    }
    if (flag)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}