// https://codeforces.com/problemset/problem/61/A
//Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 string a, b;
 cin >> a >> b;
 for (int i = 0; i < a.size();i++){
  if(a[i]=='1'&&b[i]=='1')
   cout << 0;
  else if (a[i] == '1' || b[i] == '1')
   cout << 1;
  else
   cout << 0;
 }
 cout << endl;
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}