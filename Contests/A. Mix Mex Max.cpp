#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

int mex(vector<int> arr)
{
 set<int> s(arr.begin(), arr.end());
 int result = 0;
 while (s.count(result))
 {
  result++;
 }
 return result;
}

void solve()
{
 int n;
 cin >> n;
 vi a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];

 
 bool flag = true;
 function<bool()> backtrack = [&]() -> bool
 {
 
  int pos = -1;
  for (int i = 0; i < n; i++)
  {
   if (a[i] == -1)
   {
    pos = i;
    break;
   }
  }

  if (pos == -1)
  {
  
   for (int i = 0; i <= n - 3; i++)
   {
    vector<int> triplet = {a[i], a[i + 1], a[i + 2]};
    int mexVal = mex(triplet);
    int minVal = *min_element(triplet.begin(), triplet.end());
    int maxVal = *max_element(triplet.begin(), triplet.end());
    if (mexVal != maxVal - minVal)
    {
     return false;
    }
   }
   return true;
  }

  
  for (int val = 0; val <= n; val++)
  {
   a[pos] = val;
   if (backtrack())
   {
    return true;
   }
  }
  a[pos] = -1; 
  return false;
 };

 if (backtrack())
 {
  cout << "YES\n";
 }
 else
 {
  cout << "NO\n";
 }
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}