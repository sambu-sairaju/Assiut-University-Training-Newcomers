#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(int n)
{
    int bin[32] = {0}, num = n, i = 0;
    while (num > 0)
    {
        bin[i] = num % 2;
        i++;
        num /= 2;
    }
    int l = 0, r = i - 1;
    while (l < r)
    {
        if (bin[l] != bin[r])
            return false;
        l++;
        r--;
    }
    return true;
}
bool is_odd(int n)
{
    if (n % 2 == 1)
        return true;
    else
        return false;
}
void wonderful(int n)
{
    bool odd = is_odd(n);
    if (odd)
    {
        bool palindrome = is_palindrome(n);
        if (palindrome)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    wonderful(n);
    return 0;
}