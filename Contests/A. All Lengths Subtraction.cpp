https : // codeforces.com/contest/2143/problem/A
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
 vi pos(n + 1);
 for (int i = 0; i < n; ++i)
 {
  int p_val;
  cin >> p_val;
  pos[p_val] = i;
 }

 int l = 0;
 int r = n - 1;
 bool possible = true;
 for (int k = 1; k <= n; ++k)
 {
  int current_pos = pos[k];
  if (current_pos == l)
  {
   l++;
  }
  else if (current_pos == r)
  {
   r--;
  }
  else
  {
   possible = false;
   break;
  }
 }

 if (possible)
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
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}