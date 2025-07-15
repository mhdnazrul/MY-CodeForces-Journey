#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  vi a(n), b(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i] >> b[i];
  }
  int ans = 0, passenger = 0;
  for (int i = 0; i < n; ++i)
  {
    passenger -= a[i];
    passenger += b[i];
    ans = max(passenger, ans);
  }
  cout << ans << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}