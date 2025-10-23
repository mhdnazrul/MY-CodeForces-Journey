// https://codeforces.com/contest/2162/problem/B
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
bool isPalindrome(const string &s)
{
 int l = 0, r = s.size() - 1;
 while (l < r)
 {
  if (s[l] != s[r])
   return false;
  l++;
  r--;
 }
 return true;
}
void solve(int ln_s, const string &s)
{
 vi zeros, ones;
 string store_0, store_1;
 for (int i = 0; i < ln_s; i++)
 {
  if (s[i] == '0')
   zeros.push_back(i + 1);
  else
   store_0 += s[i];
  if (s[i] == '1')
   ones.push_back(i + 1);
  else
   store_1 += s[i];
 }
 if (isPalindrome(store_0))
 {
  cout << zeros.size() << '\n';
  for (int x : zeros)
   cout << x << " ";
  cout << '\n';
  return;
 }
 if (isPalindrome(store_1))
 {
  cout << ones.size() << '\n';
  for (int x : ones)
   cout << x << " ";
  cout << '\n';
  return;
 }
 cout << "-1\n";
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
 {
  int n;
  string s;
  cin >> n >> s;
  solve(n, s);
 }
 return 0;
}