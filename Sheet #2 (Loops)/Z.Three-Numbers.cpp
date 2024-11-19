#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s, x, y, z, c = 0;
    cin >> k >> s;
    for (x = 0; x <= k; x++)
    {
        for (y = 0; y <= k; y++)
        {
            z = s - (x + y);
            if (z <= k && z >= 0)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}
