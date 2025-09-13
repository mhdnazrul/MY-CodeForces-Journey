// https://codeforces.com/problemset/problem/263/A
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
 int ans = 0;
 int Matrix[6][6];
 for (int i = 1; i < 6; ++i)
 {
  for (int j = 1; j < 6; ++j)
  {
   int t;
   cin >> t;
   if (t == 1)
   {
    ans = abs(3 - i) + abs(3 - j);
   }
  }
 }
 cout << ans << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}