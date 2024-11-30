#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, r;
    cin >> s;
    r = s;
    reverse(r.begin(), r.end());
    if (s == r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}