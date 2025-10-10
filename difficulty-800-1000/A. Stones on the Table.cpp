// A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A
// nazrulislam_7
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
  int n, ans = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 1; ++i)
  {
    if (s[i] == s[i + 1])
      ans++;
  }
  cout << ans << endl;
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}