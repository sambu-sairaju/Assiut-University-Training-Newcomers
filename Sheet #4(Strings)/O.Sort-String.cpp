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
    int n, freq[26] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }
    string t;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] != 0)
        {
            cout <<char('a'+i);
            freq[i]--;
        }
    }
    cout << endl;
    return 0;
}