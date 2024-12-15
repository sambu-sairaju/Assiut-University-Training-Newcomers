#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cin >> size;
    string array;
    cin >> array;
    for (int i = 0; i < array.size(); i++)
        sum += (array[i] - '0');
    cout << sum;
    return 0;
}