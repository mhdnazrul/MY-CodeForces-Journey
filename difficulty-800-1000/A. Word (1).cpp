// A. Word
// https://codeforces.com/problemset/problem/59/A
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
 {
  c = tolower(c);
 }
 return result;
}
string to_uper(const string &s)
{
 string result = s;
 for (char &c : result)
 {
  c = toupper(c);
 }
 return result;
}
void solve()
{
 string s;
 cin >> s;
 int uper = 0, lower = 0;
 for (int i = 0; i < s.length(); ++i)
 {
  if (s[i] >= 'A' && s[i] <= 'Z') 
   uper++;
  else
   lower++;
 }
 if (lower >= uper)
 {
  cout << to_lower(s) << endl;
 }
 else
  cout << to_uper(s) << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}