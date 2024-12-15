#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> n;
    n.push_back(a);
    n.push_back(b);
    n.push_back(c);

    sort(n.begin(), n.end());
    for (int num : n)
    {
        cout << num << endl;
    }
    cout << endl
         << a << endl
         << b << endl
         << c << endl;
    return 0;
}
