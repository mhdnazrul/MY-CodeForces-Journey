// https://codeforces.com/problemset/problem/677/A
// nazrulislam_7
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
 int n, h;
 cin >> n >> h;
 int ans = 0;
 for (int i = 0; i < n; ++i)
 {
  int t;
  cin >> t;
  if (t <= h)
   ans++;
  else
   ans += 2;
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