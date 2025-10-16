// https://codeforces.com/contest/2160/problem/A
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
 int tt, i, j, cnt = 0;
 cin >> tt;
 vi V(105, 0);
 for (i = 0; i < tt; ++i)
 {
  cin >> j;
  if (j < 102)
   V[j]++;
 }
 while (V[cnt] > 0)
  cnt++;
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
