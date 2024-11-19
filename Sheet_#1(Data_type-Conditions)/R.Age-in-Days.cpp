#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r;
    cin >> n;
    int years = n / 365;
    r = n % 365;
    int months = r / 30;
    r = r % 30;
    int days = r;
    cout << years << " years" << endl
         << months << " months" << endl
         << days << " days" << endl;
    return 0;
}
