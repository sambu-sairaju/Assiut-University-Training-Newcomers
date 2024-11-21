#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = INT_MAX, maxi = INT_MIN, p_min = -1, p_max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            p_max = i;
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
            p_min = i;
        }
    }
    int t = arr[p_min];
    arr[p_min] = arr[p_max];
    arr[p_max] = t;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}