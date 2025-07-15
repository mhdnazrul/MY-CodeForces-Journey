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
  vi nums(n);
  for (int i = 0; i < n; ++i)
    cin >> nums[i];
  vi tp_arr = nums;
  int cnt = 0;
  sort(tp_arr.rbegin(), tp_arr.rend());
  for (int i = 0; i < n; ++i)
  {
    if (tp_arr[i] != nums[i])
      cnt++;
  }
  cout << cnt << endl;
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