// https://vjudge.net/contest/756123#problem/E
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
 int t;
 cin >> t;
 string a_to_z = "abcdefghijklmnopqrstuvwxyz";
 while (t--)
 {
  int n;
  cin >> n;
  vi V(n);
  for (int &x : V)
   cin >> x;

  string s(n, '?');
  unordered_map<char, int> mp;
  int next_char = 0;

  for (int i = 0; i < n; ++i)
  {
   if (V[i] == 0)
   {
    s[i] = a_to_z[next_char++];
    mp[s[i]] = 1;
   }
   else
   {
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
     if (it->second == V[i])
     {
      s[i] = it->first;
      ++(it->second);
      break;
     }
    }
   }
  }

  cout << s << '\n';
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}