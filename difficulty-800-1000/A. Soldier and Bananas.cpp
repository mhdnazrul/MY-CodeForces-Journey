// https://codeforces.com/problemset/problem/546/A
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
  int k, n, w, sum = 0;
  cin >> k >> n >> w;
  for (int i = 1; i <= w; ++i)
    sum += i * k;
  cout << (sum > n ? sum - n : 0) << endl;
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}