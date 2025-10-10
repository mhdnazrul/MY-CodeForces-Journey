// https://codeforces.com/problemset/problem/281/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
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
  for (int i = 0; i < str.length(); ++i)
  {
    char c = str[i];
    if (i == 0)
    {
      c = toupper(c);
      cout << c;
    }
    else
      cout << c;
  }
  cout << endl;
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}