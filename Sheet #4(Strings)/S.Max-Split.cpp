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
    vector<string> a;
    cin >> s;
    int l_count = 0, r_count = 0, count = 0, start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            l_count++;
        if (s[i] == 'R')
            r_count++;
        if (l_count == r_count)
        {
            count++;
            a.push_back(s.substr(start, i - start + 1));
            start = i + 1;
        }
    }
    cout << count << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}