// https://codeforces.com/contest/2149/problem/D
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
 int n, cnt_a = 0, cnt_b = 0;
 string str;
 cin >> n >> str;
 vi a(0, 0), b(0, 0);
 for (int i = 0; i < n; i++)
 {
  if (str[i] == 'a')
   a.push_back(str[i]);
  else
   b.push_back(str[i]);
 }
 cnt_a = a.size() - 1, cnt_b = b.size() - 1;
 int ans = min(cnt_a, cnt_b);
 if (ans <= 0)
  cout << 0 << endl;
 else
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