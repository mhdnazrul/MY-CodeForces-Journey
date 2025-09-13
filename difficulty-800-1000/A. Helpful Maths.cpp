// https://codeforces.com/problemset/problem/339/A
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
 int ln = str.length();
 vi num(0);
 string op = "";
 for (int i = 0; i < ln; ++i)
 {
  if (str[i] == '+')
   op += '+';
  else
  {
   int c = str[i] - '0';
   num.push_back(c);
  }
 }
 sort(num.begin(), num.end());
 for (int i = 0; i < num.size(); ++i)
 {
  cout << num[i];
  cout<<(i<num.size()-1?"+":"");
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