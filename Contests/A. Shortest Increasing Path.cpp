// https://codeforces.com/contest/2147/problem/A
//Nazrul Islam
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
 ll x, y;
 cin >> x >> y;
 if (x == y)
 {
  cout << -1 << '\n';
 }
 else if (x < y)
 {
  cout << 2 << '\n';
 }
 else
 {
  if (y == 1 || x - y == 1)
   cout << -1 << '\n';
  else
   cout << 3 << '\n';
 }
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