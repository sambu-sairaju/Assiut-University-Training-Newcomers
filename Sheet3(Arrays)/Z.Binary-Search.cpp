#include <bits/stdc++.h>
using namespace std;
void f(int arr[], int num, int r)
{
    int l = 0;
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (arr[m] == num)
        {
            cout << "found" << endl;
            return;
        }
        else if (arr[m] < num)
            l = m + 1;
        else
            r = m - 1;
    }
    cout << "not found" << endl;
    return;
}
int main()
{
    int arr[100000], n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        f(arr, num, n - 1);
    }
    return 0;
}