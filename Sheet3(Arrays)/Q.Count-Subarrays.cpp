#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[100];
        int n, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int k;
                for (k = i; k < j; k++)
                {
                    if (arr[k] > arr[k + 1])
                        break;
                }
                if (k == j)
                    c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
