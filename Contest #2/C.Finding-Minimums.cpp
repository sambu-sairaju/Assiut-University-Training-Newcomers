#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, num, c = 0, mini;
    cin >> n >> k;
    mini = numeric_limits<int>::max();
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        c++;
        if (num < mini)
            mini = num;
        if (c % k == 0)
        {
            cout << mini << " ";
            c = 0;
            mini = numeric_limits<int>::max();
        }
    }
    if (n % k != 0)
        cout << mini << endl;
    return 0;
}