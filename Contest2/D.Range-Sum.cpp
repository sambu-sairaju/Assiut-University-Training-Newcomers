#include <bits/stdc++.h>
using namespace std;

long long sumof(long long n)
{
    long long sum = (n * (n + 1)) / 2;
    return sum;
}

long long sol(long long l, long long r)
{
    return sumof(r) - sumof(l - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        if (l < r)
        {
            long long s = sol(l, r);
            cout << s << endl;
        }
        else
        {
            long long s = sol(r, l);
            cout << s << endl;
        }
    }
    return 0;
}