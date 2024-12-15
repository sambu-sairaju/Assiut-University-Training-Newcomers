#include <bits/stdc++.h>
using namespace std;
void solution2()
{
    int size, query;
    cin >> size >> query;

    long long *arr = new long long[size];
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        long long num;
        cin >> num;
        sum += num;
        arr[i] = sum;
    }

    while (query--)
    {
        int left, right;
        cin >> left >> right;

        left--;
        right--;

        if (left == 0)
        {
            cout << arr[right] << endl;
            continue;
        }

        cout << arr[right] - arr[left - 1] << endl;
    }
}
int main()
{
    solution2();
}