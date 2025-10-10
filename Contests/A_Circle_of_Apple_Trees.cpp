// https://codeforces.com/contest/2153/problem/A
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
 int n;
 cin >> n;
 vi cnt(n + 1);
 for (int i = 1; i <= n; i++)
 {
  int x;
  cin >> x;
  cnt[x]++;
 }
 int ans = 0;
 for (int i = 1; i <= n; i++)
 {
  if (cnt[i] >= 1)
   ans++;
 }
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