#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            int r = temp % 10;
            sum += r;
            temp = temp / 10;
        }
        if (a <= sum && sum <= b)
            s = s + i;
    }
    cout << s << endl;
    return 0;
}
