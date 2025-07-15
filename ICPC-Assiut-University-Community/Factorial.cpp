#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  ll n, Factorial = 1;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    Factorial *= i;
  }
  cout << Factorial << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}