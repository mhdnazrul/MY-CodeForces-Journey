#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
 int n;
 cin >> n;
 vi a(n);
 for (int &x : a)
  cin >> x;

 
 int freq[101] = {0};
 bool ok = false;
 for (int x : a)
 {
  if (++freq[x] >= 2)
  {
   ok = true;
   break;
  }
 }
 cout << (ok ? "YES\n" : "NO\n");
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
