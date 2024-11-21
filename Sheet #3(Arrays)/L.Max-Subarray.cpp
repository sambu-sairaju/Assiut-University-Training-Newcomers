#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[100], n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int ans = INT_MIN;
                for (int k = i; k <= j; k++)
                {
                    ans = max(ans, arr[k]);
                }
                cout << ans << " ";
            }
        }
        cout << endl;
    }
}