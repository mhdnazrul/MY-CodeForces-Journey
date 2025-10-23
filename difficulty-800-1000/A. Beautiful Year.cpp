// https://codeforces.com/problemset/problem/271/A
// nazrulislam_7
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
 while (true)
 {
  n++;
  set<int> st;
  string s = to_string(n);
  for (int i = 0; i < 4; ++i)
   st.insert(s[i]);
  if (st.size() == 4)
   break;
  else
   n = stoi(s);
 }
 cout << n << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}