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
    int freq[5] = {0}, mini = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
            freq[0]++;
        else if (s[i] == 'G' || s[i] == 'g')
            freq[1]++;
        else if (s[i] == 'Y' || s[i] == 'y')
            freq[2]++;
        else if (s[i] == 'P' || s[i] == 'p')
            freq[3]++;
        else if (s[i] == 'T' || s[i] == 't')
            freq[4]++;
    }
    for (int i = 0; i < 5; i++)
    {
        if (freq[i] < mini)
            mini = freq[i];
    }
    cout << mini << "\n";
    return 0;
}