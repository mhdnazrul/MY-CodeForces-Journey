#include <iostream>
#include <vector>

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
  for (int i = 1; i <= n; ++i)
  {
    if (n % i == 0)
      cout << i << '\n';
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}