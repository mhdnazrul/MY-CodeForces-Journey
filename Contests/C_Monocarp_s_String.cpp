// https://codeforces.com/contest/2145/problem/C
// Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int cnt_a = 0, cnt_b = 0;
  for (char c : s)
  {
    if (c == 'a')
      cnt_a++;
    else
      cnt_b++;
  }
  if (cnt_a == cnt_b)
  {
    cout << 0 << "\n";
    return;
  }

  int diff = cnt_a - cnt_b;

  map<int, int> mp;
  mp[0] = 0;

  int cnt = 0, min_len = n;

  for (int i = 0; i < n; ++i)
  {
    if (s[i] == 'a')
      cnt++;
    else
      cnt--;
    int balans = cnt - diff;
    if (mp.count(balans))
    {
      int st_ln = mp[balans];
      int crent_ln = (i + 1) - st_ln;
      min_len = min(min_len, crent_ln);
    }
    mp[cnt] = i + 1;
  }

  if (min_len == n)
    cout << -1 << "\n";
  else
    cout << min_len << "\n";
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