#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int r = a / 1000;
    if (r % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
    return 0;
}