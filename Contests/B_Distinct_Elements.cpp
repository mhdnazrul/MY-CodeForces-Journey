// https://codeforces.com/contest/2160/problem/B
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
 vll V(n + 1);
 for (int i = 1; i <= n; i++)
  cin >> V[i];

 vll store(n + 1);
 for (int i = 1; i <= n; i++)
 {
  ll x = (i == 1 ? V[1] : V[i] - V[i - 1]);
  ll y = (ll)i - x;
  if (y == 0)
   store[i] = i;
  else
   store[i] = store[y];
 }
 for (int i = 1; i <= n; i++)
  cout << store[i] << (i < n ? " " : "\n");
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