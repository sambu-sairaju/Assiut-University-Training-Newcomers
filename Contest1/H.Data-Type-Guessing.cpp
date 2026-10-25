//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Read them safely as long long right away
    long long n, k, a;
    cin >> n >> k >> a;
    // Multiplication fits safely in long long (no precision loss!)
    long long multiplication = n * k;
    // Step 1: Does it have decimals?
    // If the remainder is not 0, it doesn't divide perfectly (it's a decimal!)
    if (multiplication % a != 0) 
    {
        cout << "double" << endl;
    }
    else 
    {
        // Step 2: It is a whole number. Let's do the division.
        long long result = multiplication / a;
        // Step 3: Check its size
        if (result <= 2147483647)
            cout << "int" << endl;
        else
            cout << "long long" << endl;
    }
    return 0;
}