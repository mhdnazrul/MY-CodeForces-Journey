#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    for (int i = 0; i < n; ++i)
      cin >> b[i];

    long long sum = -1;
    bool possible = true;
    for (int i = 0; i < n; ++i)
    {
      if (b[i] != -1)
      {
        if (sum == -1)
          sum = a[i] + b[i];
        else if (a[i] + b[i] != sum)
        {
          possible = false;
          break;
        }
      }
    }

    if (!possible)
    {
      cout << 0 << "\n";
      continue;
    }
    if (sum == -1)
    {
      long long l = 0, r = 2 * k;
      for (int i = 0; i < n; ++i)
      {
        l = max(l, a[i]);
        r = min(r, a[i] + k);
      }

      if (l > r)
        cout << 0 << "\n";
      else
        cout << (r - l + 1) << "\n";
    }
    else
    {
      for (int i = 0; i < n; ++i)
      {
        if (b[i] == -1)
        {
          long long val = sum - a[i];
          if (val < 0 || val > k)
          {
            possible = false;
            break;
          }
        }
      }
      cout << (possible ? 1 : 0) << "\n";
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
