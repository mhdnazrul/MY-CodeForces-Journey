// One-Prime.cpp
#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  if (n <= 1)
  {
    cout << "NO" << '\n';
    return;
  }
  if (n == 2 || n == 3)
  {
    cout << "YES" << '\n';
    return;
  }
  if (n % 2 == 0 || n % 3 == 0)
  {
    cout << "NO" << '\n';
    return;
  }
  for (int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}