#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int n = i;
        while (n > 0)
        {
            int r = n % 10;
            if ((r != 4) && (r != 7))
                break;
            n = n / 10;
        }
        if (n == 0)
        {
            c++;
            cout << i << " ";
        }
    }
    if (c == 0)
        cout << -1;
    cout << endl;
    return 0;
}