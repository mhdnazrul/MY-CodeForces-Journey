// https://codeforces.com/contest/2160/problem/C
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

int SOLVEBIT(int x)
{
 int cnt_rev = 0;
 while (x > 0)
 {
  cnt_rev = (cnt_rev << 1) | (x & 1);
  x >>= 1;
 }
 return cnt_rev;
}
unordered_set<int> valid_n;
void CNT_XOR_N()
{
 for (int i = 1; i <= (1 << 20); ++i)
 {
  int XOR_n = SOLVEBIT(i);
  valid_n.insert(i ^ XOR_n);
 }
}

void solve()
{
 int n;
 cin >> n;
 cout << (valid_n.count(n) ? "YES\n" : "NO\n");
}

int main()
{
 FAST_IO;
 CNT_XOR_N(); 
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}
