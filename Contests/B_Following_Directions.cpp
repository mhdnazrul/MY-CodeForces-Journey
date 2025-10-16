// https://codeforces.com/contest/1791/problem/B
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
 int n;
 string s;
 cin >> n >> s;

 int x = 0, y = 0;
 bool flag = false;

 for (char ch : s)
 {
  if (ch == 'U')
   y++;
  else if (ch == 'D')
   y--;
  else if (ch == 'L')
   x--;
  else if (ch == 'R')
   x++;

  if (x == 1 && y == 1)
  {
   flag = true;
   break;
  }
 }

 cout << (flag ? "YES" : "NO") << '\n';
}

int main()
{
 FAST_IO;
 int T; cin >> T;while(T--)
 solve();
 return 0;
}