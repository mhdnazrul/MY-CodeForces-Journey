// https://codeforces.com/problemset/problem/271/A
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
 while (1)
 {
  n++;
  string s = to_string(n);
  set<char> sc;
  for (int i = 0; i < 4; ++i)
  {
   sc.insert(s[i]);
  }
  if (sc.size() == 4)
   break;
  else
  {
   n = stoi(s);
  }
 }
 cout << n<< endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}