#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        long long n, s;
        cin >> n >> s;

        // Calculate the maximum sum of numbers 1 to n
        long long maxSum = n * (n + 1) / 2;

        // If the required sum is greater than the maximum sum, it's impossible
        if (s > maxSum) {
            cout << -1 << endl;
            return 0;
        }

        vector<int> result;
        long long currentSum = 0;

        // Start from the largest number <= n
        for (int i = n; i >= 1; i--) {
            if (currentSum + i <= s) {
                result.push_back(i);
                currentSum += i;
            }
            if (currentSum == s) break;
        }

        // If we exactly achieve the sum, print the result
        if (currentSum == s) {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl; // If not, output -1
        }
    }

    return 0;
}
