// https://codeforces.com/contest/2149/problem/A
// Nazrul Islam
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
 cin >> n;
 vi v(n);
 int neg = 0, ans = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
  if (v[i] < 0)
   neg++;
  else if (v[i] == 0)
   ans++;
 }
 if (neg % 2 != 0)
  ans += 2;
 cout << ans << endl;
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