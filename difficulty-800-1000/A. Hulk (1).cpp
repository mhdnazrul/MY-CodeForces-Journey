// https://codeforces.com/problemset/problem/705/A
// Nazrul Islam
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
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
      cout << "I hate ";
    else if (i % 2 == 0)
      cout << "that I love ";
    else
      cout << "that I hate ";
  }
  cout << "it\n";
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}