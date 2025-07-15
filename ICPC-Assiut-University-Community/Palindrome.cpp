#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  int temp = n;
  int reverse = 0;
  while (temp > 0)
  {
    int digit = temp % 10;
    reverse = reverse * 10 + digit;
    temp /= 10;
  }
  if (n == reverse)
  {
    cout << reverse << '\n'
         << "YES" << '\n';
  }
  else
  {
    cout << reverse << '\n'
         << "NO" << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}