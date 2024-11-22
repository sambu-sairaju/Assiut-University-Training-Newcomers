#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0 << endl;
    else if (n == 2)
        cout << 1 << endl;
    else
    {
        long long n1 = 0, n2 = 1, n3 = 0;
        for (int i = 3; i <= n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << endl;
    }
    return 0;
}
