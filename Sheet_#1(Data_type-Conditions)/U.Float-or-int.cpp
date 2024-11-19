#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;
    if (x == static_cast<int>(x))
        cout << "int " << x << endl;
    else
        cout << "float " << static_cast<int>(x) << " " << fixed << setprecision(3) << x - static_cast<int>(x) << endl;
    return 0;
}
