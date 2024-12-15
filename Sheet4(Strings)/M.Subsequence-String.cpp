#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str, test = "hello", temp;
    cin >> str;
    int index = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == test[index])
        {
            temp.push_back(str[i]);
            index++;
        }
    }
    if (temp == test)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}