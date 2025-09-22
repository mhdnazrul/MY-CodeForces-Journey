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
 ll a, b;
 cin >> a >> b;
 if (a == b)
 {
  cout << 0 << "\n";
 }
 else if ((a % b == 0) || (b % a == 0))
 {
  cout << 1 << "\n";
 }
 else
 {
  cout << 2 << "\n";
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