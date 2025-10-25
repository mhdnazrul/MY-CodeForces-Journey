// https://codeforces.com/problemset/problem/469/A
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
 int n, p, q, tp;
 cin >> n >> p;
 vi v(n + 1, 0);
 for (int i = 0; i < p; i++)
 {
  cin >> tp;
  v[tp]++;
 }

 cin >> q;
 for (int i = 0; i < q; i++)
 {
  cin >> tp;
  v[tp]++;
 }
 bool ans = true;
 for (int i = 1; i <= n; i++)
 {
  if (v[i] == 0)
   ans = false;
 }
 cout << (ans ? "I become the guy.\n" : "Oh, my keyboard!\n");
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}