#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll Floor_nums(ll x)
{
 ll res = 0;
 while ((1LL << (res + 1)) <= x)res++;
 return res;
}

void solve()
{
 ll n, c;
 cin >> n >> c;
 vll a(n);
 for (int i = 0; i < n; ++i)cin >> a[i];

 sort(a.begin(), a.end());
 set<ll> nums;
 for (int i = 0; i < n; ++i)nums.insert(i);

 ll answer = 0;
 for (int i = 0; i < n; ++i)
 {
  ll wit = a[i], max_val = -1;
  if (wit <= c)
   max_val = Floor_nums(c / wit);

  auto it = nums.upper_bound(max_val);
  if (it == nums.begin())
  {
   answer++;
   if (!nums.empty())
    nums.erase(prev(nums.end()));
  }
  else
  {
   --it;
   nums.erase(it);
  }
 }
 cout << answer << endl;
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
