#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  if (n < 2)
    cout << -1 << '\n';
  for (int i = 2; i <= n; ++i)
  {
    if (i % 2 == 0)
      cout << i << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //  int t;
  //  cin >> t;
  //  while (t--) {
  solve();

  //  }
  return 0;
}