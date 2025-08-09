#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vi<int>;
using vll = vi<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  int n, s;
  cin >> n >> s;
  vi a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int sum = accumulate(a.begin(), a.end(), 0);
  // cout << "sum" << sum << endl;
  if (sum == s)
  {
    cout << -1 << '\n';
    return;
  }
  int pfix = 0;
  bool fid = false;
  for (int i = 0; i < n - 1; i++)
  {
    pfix += a[i];
    if (pfix == s)
    {
      for (int j = i + 1; j < n; j++)
        cout << a[j] << ' ';
      for (int j = 0; j <= i; j++)
        cout << a[j] << (j == i ? '\n' : ' ');
      fid = true;
      break;
    }
  }
  if (!fid)
  {
    for (int i = 0; i < n; i++)
      cout << a[i] << (i == n - 1 ? '\n' : ' ');
  }
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}