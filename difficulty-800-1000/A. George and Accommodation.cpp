// problem link:https://codeforces.com/problemset/problem/467/A
// Author: cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
void solve()
{
 int n, cnt = 0;
 cin >> n;
 while (n--)
 {
  int a, b;
  cin >> a >> b;
  if (a <= b-2)
   cnt++;
 }
 cout << cnt << endl;
}

int main()
{
 fast_io;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}