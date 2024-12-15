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
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?')
            flag = true;
        else if (flag && s[i] == '=')
            cout << ": ";
        else if (flag && s[i]=='&')
            cout<<"\n";
        else if(flag)
            cout<<s[i];
    }
    cout<<"\n";
    return 0;
}