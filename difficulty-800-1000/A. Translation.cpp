// https://codeforces.com/problemset/problem/41/A
// nazrulislam_7
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
 reverse(b.begin(), b.end());
 cout << (a == b ? "YES\n" : "NO\n");
}

int main() {
  FAST_IO;
 // int T; cin >> T;while(T--)
    solve();
  return 0;
}