// https://codeforces.com/problemset/problem/344/A
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
 int n;
 cin >> n;
 vector<string> magnets(n);
 for (int i = 0; i < n; i++)
  cin >> magnets[i];

 int groups = 1;
 for (int i = 1; i < n; i++)
 {
  if (magnets[i] != magnets[i - 1])
  {
   groups++;
  }
 }

 cout << groups << "\n";
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}