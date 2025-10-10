// https://codeforces.com/problemset/problem/617/A
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
 ll n;
 cin >> n;
 if (n % 2050)
 {
  cout << -1 << endl;
  return;
 }
 n /= 2050;
 ll cnt = 0;
 while (n)
 {
  cnt += n % 10;
  n /= 10;
 }
 cout << cnt << endl;
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