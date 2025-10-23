// https://codeforces.com/problemset/problem/1873/A
// nazrulislam_7
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
 string str;
 cin >> str;
 if (str == "abc" || str == "acb" || str == "bac" || str == "cba")
  cout << "YES\n";
 else
  cout << "NO\n";
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