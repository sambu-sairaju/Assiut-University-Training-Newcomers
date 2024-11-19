#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, gcd = 1, lesser;
    cin >> a >> b;

    if (a <= b)
    {
        lesser = a;
    }
    else
    {
        lesser = b;
    }

    for (int i = 1; i <= lesser; i++)
    {
        if ((a % i == 0) && (b % i == 0))
            gcd = i;
    }
    cout << gcd << endl;

    return 0;
}