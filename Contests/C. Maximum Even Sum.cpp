#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;

void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  ll a, b;
  cin >> a >> b;
  if ((a % 2 == 1) && (b % 2 == 1))
  {
   cout << -1 << '\n';
   continue;
  }
  ll ans = -1;
  // Try k = 1
  if ((a + b) % 2 == 0)
   ans = a + b;
  // Try k = 2 if b even
  if (b % 2 == 0)
  {
   ll tmp = a * 2 + b / 2;
   if (tmp % 2 == 0)
    ans = max(ans, tmp);
  }
  cout << ans << '\n';
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}