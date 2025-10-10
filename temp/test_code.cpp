//
// nazrulislam_7
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
  int ans = 0;
  while (n--)
  {
    string s;
    cin >> s;
    int ln = s.size();
    for (int i = 1; i < ln; i++)
    {
      if (s[i] == '-' && s[i - 1] == '-')
        ans >> 1;
      else if (s[i] == '+' && s[i - 1] == '+')
        ans << 1;
    }
  }
  cout << ans << endl;
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}