// https://codeforces.com/problemset/problem/996/A
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
 int n, tp, cnt = 0;
 cin >> n;
 while (n > 0)
 {
  cnt++;
  if (n >= 100)
   n -= 100;
  else if (n >= 20)
   n -= 20;
  else if (n >= 10)
   n -= 10;
  else if (n >= 5)
   n -= 5;
  else if (n >= 1)
   n -= 1;
 }
 cout << cnt << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}