#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[100000], e = 0, o = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                e++;
            else
                o++;
        }
        if (e == o)
            cout << 0 << endl;
        else if (abs(e - o) % 2 == 1)
            cout << -1 << endl;
        else
            cout << abs(e - o) / 2 << endl;
    }
    return 0;
}