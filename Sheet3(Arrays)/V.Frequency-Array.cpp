#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000], n, m, fre[100000] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        fre[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout<<fre[i]<<endl;
    }
    return 0;
}