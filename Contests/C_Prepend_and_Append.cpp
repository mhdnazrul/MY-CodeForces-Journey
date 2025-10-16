// https://codeforces.com/contest/1791/problem/C
// nazrulislam_7

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);

void solve()
{
 int n;
 string s;
 cin >> n >> s;

 int l = 0, r = n - 1;
 while (l < r && s[l] != s[r])
 {
  l++;
  r--;
 }

 cout << r - l + 1 << '\n';
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
