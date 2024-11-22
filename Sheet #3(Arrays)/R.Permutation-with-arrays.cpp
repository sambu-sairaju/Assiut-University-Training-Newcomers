#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], b[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        int ele = a[i];
        bool f = false;
        for (int k = 0; k < n; k++)
        {
            if (b[k] == ele)
                f = true;
        }
        if (f == false)
        {
            cout << "no" << endl;
            return 0;
        }
        else
        {
            int c1 = 0, c2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == ele)
                    c1++;
                if (b[i] == ele)
                    c2++;
            }
            if (c1 != c2)
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}