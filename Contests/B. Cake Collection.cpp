#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int n;
 ll m;
 cin >> n >> m;
 vll a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];

 sort(a.rbegin(), a.rend());

 ll ans = 0;
 for (int i = 0; i < n && i < m; ++i)
 {
  ans += (m - i) * a[i];
 }
 cout << ans << '\n';
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