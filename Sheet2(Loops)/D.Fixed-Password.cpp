//https://codeforces.com/group/MWSDmqGsZm/contest/326176/problem/D

#include <iostream>
using namespace std;
int main()
{
    int password;
    while (cin >> password)
    {
        if (password == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
