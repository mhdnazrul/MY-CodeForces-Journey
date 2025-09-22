// https://codeforces.com/problemset/problem/1328/A
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
 int a, b;
 cin >> a >> b;
 if (a % b == 0)
 {
  cout << 0 << endl;
  return;
 }
 else if (a > b)
 {
  int div = a / b;
  int next_b = b * (div + 1);
  cout << next_b - a << endl;
 }
 else
 {
  cout << b - a << endl;
  return;
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