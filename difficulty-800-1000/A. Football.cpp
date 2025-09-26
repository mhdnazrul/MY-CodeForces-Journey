// https://codeforces.com/problemset/problem/96/A
//Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 string s;
 cin >> s;
 int ln = s.length();
 int zero = 0, ones = 0, cnt = 0;
 for (int i = 0; i < ln; i++)
 {
  if (s[i] == '0')
  {
   zero++;
   ones = 0;
   cnt = max(cnt, zero);
  }
  else if (s[i] == '1')
  {
   zero = 0;
   ones++;
   cnt = max(cnt, ones);
  }
 }
 if (cnt >= 7)
  cout << "YES\n";
 else
  cout << "NO\n";
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}
