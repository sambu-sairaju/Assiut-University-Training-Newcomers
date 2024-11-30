#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        for (int i = 0, j = 0; i < s.length() && j < t.length(); i++, j++)
        {
            cout << s[i] << t[j];
        }
        if (s.length() > t.length())
            cout << s.substr(t.length()) << endl;
        else if (s.length() < t.length())
            cout << t.substr(s.length()) << endl;
        else
            cout << endl;
    }
    return 0;
}