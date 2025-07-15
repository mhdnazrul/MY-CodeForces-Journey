#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        double minCost = 1e18;
        int minRemove = n - 1;
        for (int mask = 1; mask < (1 << n); ++mask) {
            string numStr = "";
            int digitSum = 0;
            bool leadingZero = true;

            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    char c = s[i];
                    numStr += c;
                    digitSum += (c - '0');
                }
            }

            if (digitSum == 0) continue; 

            ll number = stoll(numStr);
            double cost = (double)number / digitSum;
            int removed = n - __builtin_popcount(mask);

            if (cost < minCost || (abs(cost - minCost) < 1e-9 && removed < minRemove)) {
                minCost = cost;
                minRemove = removed;
            }
        }

        cout << minRemove << "\n";
    }

    return 0;
}
