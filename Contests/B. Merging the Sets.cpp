#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
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

 if (s[0] == '1')
 {
  cout << "YES\n";
  cout << 1 << " ";
  for (int i = 2; i <= n; ++i)
  {
   cout << i << (i == n ? "" : " ");
  }
  cout << "\n";
  return;
 }

 if (s[n - 1] == '0')
 {
  cout << "YES\n";
  for (int i = 1; i <= n; ++i)
  {
   cout << i << (i == n ? "" : " ");
  }
  cout << "\n";
  return;
 }

 int k = -1;
 for (int i = 0; i < n - 1; ++i)
 {
  if (s[i] == '0' && s[i + 1] == '1')
  {
   k = i;
   break;
  }
 }

 if (k == -1)
 {
  cout << "YES\n";
  for (int i = 1; i <= n; ++i)
  {
   cout << i << (i == n ? "" : " ");
  }
  cout << "\n";
 }
 else
 {
  cout << "NO\n";
 }
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
