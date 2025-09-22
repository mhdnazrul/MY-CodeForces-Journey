// https://codeforces.com/contest/2146/problem/A
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
 int n;
 cin >> n;
 map<int, int> V;
 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  V[x]++;
 }
 vi cnt;
 for (auto const &pair : V)
 {
  cnt.push_back(pair.second);
 }
 int ans = 0;
 for (int k = 1; k <= n; k++)
 {
  int point = 0;
  for (int f : cnt)
  {
   if (f >= k)
   {
    point++;
   }
  }
  ans = max(ans, k * point);
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
