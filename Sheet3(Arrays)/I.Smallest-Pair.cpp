#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[100];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long small;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long result = arr[i] + arr[j] + (j - i);
                if (i == 0 && j == 1)
                {
                    small = result;
                }
                if (result < small)
                {
                    small = result;
                }
            }
        }
        cout << small << endl;
    }
    return 0;
}