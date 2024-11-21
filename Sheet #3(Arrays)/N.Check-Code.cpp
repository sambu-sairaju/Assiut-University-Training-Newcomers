#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;
    if (s[a] != '-')
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i == a)
            continue;
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}