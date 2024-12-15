#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100], lsum = 0, rsum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                lsum += arr[i][j];
            if (i + j == n - 1)
                rsum += arr[i][j];
        }
    }
    int ans = lsum - rsum;
    if (ans < 0)
        ans *= -1;
    cout << ans << endl;
    return 0;
}