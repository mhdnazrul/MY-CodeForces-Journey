// https://codeforces.com/problemset/problem/467/A
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
 int n, cnt = 0;
 cin >> n;
 while (n--)
 {
  int p, g;
  cin >> p >> g;
  if (p <= g-2)
   cnt++;
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