#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d2 = n % 10;
    int d1 = n / 10;
    if (d1 == 0 || d2 == 0)
        cout << "YES" << endl;
    else if (d1 % d2 == 0 || d2 % d1 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
