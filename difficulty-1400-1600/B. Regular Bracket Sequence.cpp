// problem link : https : // codeforces.com/problemset/problem/26/B

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vi<int>;
using vll = vi<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  string s;
  cin >> s;
  stack<int> st;
  st.push(-1);
  int ans = 0;

  for (int i = 0; i < s.size(); ++i)
  {
    if (s[i] == '(')
      st.push(i);
    else
    {
      st.pop();
      if (st.empty())
        st.push(i);
      else
        ans = max(ans, i - st.top());
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