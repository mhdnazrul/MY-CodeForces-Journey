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
  string s, t;
  cin >> s >> t;
  string tp_s = s;
  reverse(tp_s.begin(), tp_s.end());
  if (tp_s == t)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int main()
{
  FAST_IO;
  solve();
  return 0;
}