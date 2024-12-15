#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int element;
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == element)
            {
                cout << "will not take number" << endl;
                return 0;
            }
        }
    }
    cout << "will take number" << endl;
    return 0;
}