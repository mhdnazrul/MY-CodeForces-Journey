#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_collect_dp(int m, int n, const vector<int> &a, const vector<int> &b)
{
  vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
  dp[0][0] = true;
  for (int i = 1; i <= n; ++i)
  {
    dp[i][0] = true;
    for (int j = 1; j <= m; ++j)
    {
      dp[i][j] = dp[i - 1][j];
      if (a[i - 1] >= b[j - 1] && dp[i - 1][j - 1])
      {
        dp[i][j] = true;
      }
    }
  }
  return dp[n][m];
}

bool can_collect_with_k_dp(int k, int m, int n, const vector<int> &a, const vector<int> &b)
{
  for (int p = 0; p <= n; ++p)
  {
    vector<int> temp_a;
    for (int i = 0; i < p; ++i)
      temp_a.push_back(a[i]);
    temp_a.push_back(k);
    for (int i = p; i < n; ++i)
      temp_a.push_back(a[i]);

    if (can_collect_dp(m, n + 1, temp_a, b))
      return true;
  }
  return false;
}

int solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  vector<int> b(m);
  for (int i = 0; i < m; ++i)
  {
    cin >> b[i];
  }

  if (can_collect_dp(m, n, a, b))
  {
    return 0;
  }

  int low = 1;
  int high = 1e9;
  int ans = -1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (can_collect_with_k_dp(mid, m, n, a, b))
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }

  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    cout << solve() << endl;
  }
  return 0;
}
