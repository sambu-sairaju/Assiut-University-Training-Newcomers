#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << s << " " << (++s) << " " << (++s) << " " << "PUM" << endl;
        s++;
        s++;
    }
    return 0;
}
