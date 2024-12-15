#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                int t = arr[j];
                arr[j] = arr[k];
                arr[k] = t;
                j++;
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}