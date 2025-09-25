#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/**
 * @brief Counts subarrays with at most K distinct elements and a valid length.
 * This is the "easy" problem we solve using a sliding window.
 */
long long solve_at__most_k(int n, int K, int l, int r, const std::vector<int> &a)
{
    if (K < 0)
        return 0;

    long long total_count = 0;
    std::map<int, int> freq;
    int left = 0; // The left side of our window

    // The right side of our window iterates through the array
    for (int right = 0; right < n; ++right)
    {
        freq[a[right]]++; // 1. Expand window to the right

        // 2. If window is invalid (too many distinct elements), shrink from the left
        while (freq.size() > K)
        {
            freq[a[left]]--;
            if (freq[a[left]] == 0)
            {
                freq.erase(a[left]);
            }
            left++;
        }

        // 3. Now, the window [left...right] is valid.
        // We need to count subarrays ending at 'right' that also meet the length requirement.
        // Valid start pointers 'b' are in [left, right]
        // Length constraint requires 'b' to be in [right - r + 1, right - l + 1]
        long long start_b = std::max((long long)left, (long long)right - r + 1);
        long long end_b = std::min((long long)right, (long long)right - l + 1);

        if (start_b <= end_b)
        {
            total_count += (end_b - start_b + 1);
        }
    }

    return total_count;
}

void solve()
{
    int n, k, l, r;
    std::cin >> n >> k >> l >> r;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    // The "easy way": solve the hard "exactly k" problem by solving
    // two simpler "at most K" problems.
    long long count_le_k = solve_at__most_k(n, k, l, r, a);
    long long count_le_k_minus_1 = solve_at__most_k(n, k - 1, l, r, a);

    std::cout << count_le_k - count_le_k_minus_1 << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}