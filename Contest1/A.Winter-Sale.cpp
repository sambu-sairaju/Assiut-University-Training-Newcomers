//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, p, a;
    cin >> x >> p;
    a = p / (1 - (x / 100));
    cout << fixed << setprecision(2) << a;
    return 0;
}
