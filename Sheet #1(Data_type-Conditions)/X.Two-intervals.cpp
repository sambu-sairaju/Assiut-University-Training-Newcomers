#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int s, e;
    s = max(l1, l2);
    e = min(r1, r2);

    if (s <= e)
        cout << s << " " << e << endl;
    else
        cout << -1 << endl;
    return 0;
}
