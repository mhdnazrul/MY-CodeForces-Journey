// https://codeforces.com/problemset/problem/136/A
//Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 int n;
 cin >> n;
 vi V(n+1);
 for (int i = 1; i <= n;i++)
  cin >> V[i];

 for (int i = 1; i <= n;i++){
  for (int j = 1; j <= n;j++){
   if(i==V[j])
    cout << j << " ";
  }
 }
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}