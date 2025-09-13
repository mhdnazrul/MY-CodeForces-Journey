// https: // codeforces.com/problemset/problem/236/A
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
 string str;
 cin >> str;
 int cnt = 0;
 sort(str.begin(), str.end());
 for (int i = 0; i < str.length(); ++i)
 {
  if (str[i] != str[i + 1])
   cnt++;
 }
 if (cnt % 2 == 0)
  cout << "CHAT WITH HER!" << endl;
 else
  cout << "IGNORE HIM!" << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}