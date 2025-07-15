#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std;

#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

using ll = long long;

bool isPrime(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (ll i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}

void solve()
{
  int x, k;
  cin >> x >> k;

  string temp = to_string(x);
  string str = "";
  for (int i = 0; i < k; ++i)
  {
    str += temp;
  }
  if (str.size() > 18) 
  {
    cout << "NO\n";
    return;
  }

  ll n = stoll(str);
  if (isPrime(n))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
