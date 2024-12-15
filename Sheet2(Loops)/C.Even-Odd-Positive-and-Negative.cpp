#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negative << endl;
    return 0;
}
