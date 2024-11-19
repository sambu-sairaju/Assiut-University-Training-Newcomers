#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev = 0;
    cin >> n;
    int orig = n;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }

    cout << rev << endl;

    if (rev == orig)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}