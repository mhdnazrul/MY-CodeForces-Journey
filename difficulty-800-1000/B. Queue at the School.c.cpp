// https://codeforces.com/problemset/problem/266/B
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
 int n, t;
 string str;
 cin >> n >> t >> str;
 while (t--)
 {
  for (int i = 1; i < n; i++)
  {
   if (str[i] == 'G' && str[i - 1] == 'B')
   {
    str[i] = 'B';
    str[i - 1] = 'G';
    i++;
   }
  }
 }
 cout << str << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}