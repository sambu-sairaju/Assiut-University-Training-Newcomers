#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    while (l < r)
    {
        cout << arr[l] << " " << arr[r] << " ";
        l++;
        r--;
    }
    if (n % 2 == 1)
        cout << arr[l];
    cout << endl;
    return 0;
}