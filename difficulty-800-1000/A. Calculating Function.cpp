// https://codeforces.com/problemset/problem/486/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
   ll n;
   cin >> n;
   if (n % 2 == 0)
      cout << n / 2 << endl;
   else
      cout << -(n + 1) / 2 << endl;
}

int main()
{
   FAST_IO;
   solve();
   return 0;
}