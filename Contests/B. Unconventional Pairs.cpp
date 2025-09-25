// https://codeforces.com/contest/2149/problem/B
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
 vi v(n);
 for (int i = 0; i < n; i++)
  cin >> v[i];
 sort(v.begin(), v.end());
 int MAX_cnt = 0;
 for (int i = 0; i < n - 1; i += 2)
 {
  int d = abs(v[i + 1] - v[i]);
  MAX_cnt = max(MAX_cnt, d);
 }
 cout << MAX_cnt << endl;
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