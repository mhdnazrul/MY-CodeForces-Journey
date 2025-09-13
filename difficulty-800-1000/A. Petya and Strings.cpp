// A. Petya and Strings
// https://codeforces.com/problemset/problem/112/A
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
string to_lower(const string &s)
{
 string result = s;
 for (char &c : result)
  c = tolower(c);
 return result;
}
void solve()
{
 string a, b;
 cin >> a >> b;
 string x = to_lower(a), y = to_lower(b);
 if (x == y)
  cout << 0 << endl;
 else if (x < y)
  cout << -1 << endl;
 else
  cout << 1 << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}