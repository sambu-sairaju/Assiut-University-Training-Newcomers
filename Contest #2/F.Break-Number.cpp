#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0, c_max = 0;

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        while (num % 2 == 0)
        {
            c++;
            num /= 2;
        }
        if (c > c_max)
        {
            c_max = c;
        }
        c = 0;
    }
    cout << c_max << endl;

    return 0;
}