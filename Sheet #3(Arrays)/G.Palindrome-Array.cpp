#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            l++;
            r--;
        }
    }
    cout << "YES" << endl;
    return 0;
}