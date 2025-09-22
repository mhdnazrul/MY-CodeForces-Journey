// https://codeforces.com/problemset/problem/200/B
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
 double n, total = 0;
 cin >> n;
 for (int i = 0; i < n; ++i)
 {
  int t;
  cin >> t;
  total += t;
 }
 double ans = total / n;
 cout << fixed << setprecision(12);

 cout << ans << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}