#include <bits/stdc++.h>
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
  string s;
  cin >> s;

  int zero = 0;
  for (char c : s)
  {
    if (c == '0')
    {
      zero++;
    }
  }

  int one = 0;
  for (int i = 0; i < zero; ++i)
  {
    if (s[i] == '1')
    {
      one++;
    }
  }

  cout << one << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
