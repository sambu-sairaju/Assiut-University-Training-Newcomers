//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    // STEP 1: Maximize Combination #3 (1 Eye, 1 Mouth, 1 Body)
    // The maximum we can build is limited by the smallest pile of parts.
    long long step1_toys = min({eyes, mouths, bodies});
    
    // Deduct the parts we just used from our inventory
    eyes -= step1_toys;
    mouths -= step1_toys;
    bodies -= step1_toys;
    
    // STEP 2: Use leftovers on Combination #1 (2 Eyes, 0 Mouths, 1 Body)
    // We only care about remaining eyes / 2 and remaining bodies.
    long long step2_toys = min(eyes / 2, bodies);
    // TOTAL: Add toys from Step 1 and Step 2
    long long total_katryoshkas = step1_toys + step2_toys;
    cout << total_katryoshkas << endl;
    return 0;
}