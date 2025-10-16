// https://codeforces.com/contest/1791/problem/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
void solve()
{
 char ch;
 cin >> ch;
 string txt = "codeforces";
 for (int i = 0; i < txt.size(); i++)
 {
  if (txt[i] == ch)
  {
   cout << "YES\n";
   return;
  }
 }
 cout << "NO\n";
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