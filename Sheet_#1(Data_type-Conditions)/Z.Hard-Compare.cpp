#include <iostream>
#include <cmath> // for log function
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C) for comparison
    double lhs = B * log(A);
    double rhs = D * log(C);

    // Compare the computed values
    if (lhs > rhs)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
