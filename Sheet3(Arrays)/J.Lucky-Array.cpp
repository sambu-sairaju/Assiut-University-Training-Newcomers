#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = 100000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
            c++;
    }
    if (c % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
    return 0;
}
