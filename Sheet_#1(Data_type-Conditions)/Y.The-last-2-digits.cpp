#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, D, R;
    cin >> A >> B >> C >> D;
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    R = (A * B * C * D) % 100;

    if (R < 10)
        cout << 0 << R << endl;
    else
        cout << R << endl;

    return 0;
}
