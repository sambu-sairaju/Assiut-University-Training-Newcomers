#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i % 2 == 0 && arr[i] > 0) || (i % 2 == 1 && arr[i] < 0))
            continue;
        else
            c1++;
    }
    for (int i = 0; i < n; i++)
    {
        if ((i % 2 == 0 && arr[i] < 0) || (i % 2 == 1 && arr[i] > 0))
            continue;
        else
            c2++;
    }
    cout << min(c1, c2) << endl;
    return 0;
}