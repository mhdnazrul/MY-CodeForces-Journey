// https://codeforces.com/contest/2153/problem/B
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
 ll x, y, z;
 cin >> x >> y >> z;

 if ((x & y) == (y & z) && (y & z) == (z & x))
  cout << "YES\n";
 else
  cout << "NO\n";
 int t = 1;
 while (t--)
 {
  cout << "(x & y)  " << (x & y) << endl;
  cout << "(y & z)  " << (y & z) << endl;
  cout << "(z & x)  " << (z & x) << endl;
  cout << "(y & z)  " << (y & z) << endl;
 }
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
