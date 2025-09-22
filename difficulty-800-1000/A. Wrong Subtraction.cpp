// A. Wrong Subtraction
// https://codeforces.com/problemset/problem/977/A
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
 int n, k, cnt = 0;
 cin >> n >> k;
 for (int i = 0; i < k; ++i)
 {
  if (n % 10 == 0)
  {
   n /= 10;
  }
  else
   n--;
 }
 cout << n << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}