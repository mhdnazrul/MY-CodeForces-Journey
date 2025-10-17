// https://codeforces.com/problemset/problem/1676/A
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
  string s, a, b;
  cin >> s;
  a = s.substr(0, 3);
  b = s.substr(3, 6);
  int x = 0, y = 0;
  for (int i = 0; i < 3; i++)
  {
    int n = a[i], m = b[i];
    x += n;
    y += m;
  }
  cout << (x == y ? "YES\n" : "NO\n");
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