#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = 100000;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
            pos = i;
        }
    }
    cout << mini << " " << pos + 1 << endl;
    return 0;
}
