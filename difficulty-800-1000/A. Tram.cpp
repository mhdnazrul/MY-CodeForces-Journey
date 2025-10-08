// https://codeforces.com/problemset/problem/116/A
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
 int T, cnt = 0, ans = 0;
 cin >> T;
 while (T--)
 {
  int out, in;
  cin >> out >> in;
  cnt -= out;
  cnt += in;
  ans = max(ans, cnt);
 }
 cout << ans << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}