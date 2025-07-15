// Multiplication-table.cpp
#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin >> n;
  for (int i = 1; i < 13; ++i)
  {
    cout << n << " * " << i << " = " << ll(n * i) << '\n';
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