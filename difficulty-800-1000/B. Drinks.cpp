// https://codeforces.com/problemset/problem/200/B
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
void solve()
{
 cout << fixed << setprecision(12);
 double n, total = 0;
 cin >> n;
 for (int i = 0; i < n; ++i)
 {
  int t;
  cin >> t;
  total += t;
 }
 cout << total / n << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}