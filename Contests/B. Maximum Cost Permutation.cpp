// https://codeforces.com/contest/2144/problem/B
//Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

int MAX_COST(int n, vector<int> &p)
{
 vector<bool> present(n + 1, false);
 for (int x : p)
 {
  if (x > 0)
   present[x] = true;
 }
 vector<int> missing_val;
 for (int i = 1; i <= n; ++i)
 {
  if (!present[i])
   missing_val.push_back(i);
 }
 int idx = 0;
 for (int i = 0; i < n; ++i)
 {
  if (p[i] == 0)
  {
   p[i] = missing_val.back();
   missing_val.pop_back();
  }
 }
 int maxCost = 0;
 int l = -1, r = -1;
 for (int i = 0; i < n; ++i)
 {
  if (p[i] != i + 1)
  {
   if (l == -1)
    l = i;
   r = i;
  }
 }
 if (l != -1)
  maxCost = r - l + 1;
 return maxCost;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
  {
   int n;
   cin >> n;
   vector<int> p(n);
   for (int i = 0; i < n; ++i)
    cin >> p[i];
   cout << MAX_COST(n, p) << '\n';
  }
  return 0;
}