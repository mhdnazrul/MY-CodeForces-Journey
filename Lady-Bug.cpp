#include <iostream>
#include <vector>
#include <string>
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
  ll n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  int f1 = 0, f2 = 0;

  for (int i = 0; i < n; ++i)
  {
    if (i % 2)
    {
      if (s1[i] == '1')
        f2--;
      if (s2[i] == '0')
        f1++;
    }
    else
    {
      if (s1[i] == '1')
        f1--;
      if (s2[i] == '0')
        f2++;
    }
  }

  if (f1 >= 0 && f2 >= 0)
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