// https://codeforces.com/problemset/problem/520/A
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
 string str;
 cin >> str;
 set<char> ch;
 int cnt_low = 0, cnt_up = 0;
 for (int i = 0; i < n; i++)
 {
  char c = tolower(str[i]);
  ch.insert(c);
 }
 cout << (ch.size()>=26 ? "YES\n" : "NO\n");
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}