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
  int n;
  string s;
  cin >> n >> s;

  int total_ones = 0;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      char bit = s[j];
      if (j == i)
      {
        bit = (bit == '0') ? '1' : '0';
      }
      if (bit == '1')
      {
        ++total_ones;
      }
    }
  }

  cout << total_ones << endl;
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