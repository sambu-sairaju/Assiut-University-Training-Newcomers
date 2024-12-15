#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[102][102] = {}; // All elements initialized to '\0'
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    int x, y;
    cin >> x >> y;
    int row[] = {-1, -1, -1, 0, 0, +1, +1, +1};
    int col[] = {-1, 0, +1, -1, +1, -1, 0, +1};
    for (int i = 0; i < 8; i++)
    {
        if (arr[x + row[i]][y + col[i]] != '.')
        {
            continue;
        }
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
