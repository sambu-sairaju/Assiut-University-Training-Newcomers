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
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
        cout << -1 * sum << endl;
    else
        cout << sum << endl;
    return 0;
}
