// https://codeforces.com/contest/2149/problem/C
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
 int n, k, MEX = 0;
 cin >> n >> k;
 vi V(n + 1, 0);
 for (int i = 0; i < n; i++)
 {
  int tp;
  cin >> tp;
  if (tp <= n)
   V[tp]++;
 }
 int cnt_zero = 0;
 for (int i = 0; i < k;i++){
  if(V[i]==0)
   cnt_zero++;
 }
 MEX = max(cnt_zero, V[k]);
 cout << MEX << endl;
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