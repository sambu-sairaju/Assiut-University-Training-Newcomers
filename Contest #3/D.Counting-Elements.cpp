#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == element + 1)
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}