// https://codeforces.com/problemset/problem/617/A
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
 cin >> n;
 int steps[] = {5, 4, 3, 2, 1};
 int idx = 0;

 while (n > 0)
 {
  if (n >= steps[idx])
  {
   n -= steps[idx];
   cnt++;          
  }
  else
  {
   idx++;
  }
 }

 cout << cnt << endl;
}

int main()
{
 FAST_IO;
 //  int T; cin >> T;while(T--)
 solve();
 return 0;
}