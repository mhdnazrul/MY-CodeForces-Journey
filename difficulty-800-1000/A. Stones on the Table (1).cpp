// A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A
// Nazrul Islam
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
 int n, cnt = 0;
 string str;
 cin >> n >> str;
 for (int i = 0; i < n - 1; ++i)
 {
  if (str[i] == str[i + 1])
   cnt++;
 }
 cout << cnt << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}