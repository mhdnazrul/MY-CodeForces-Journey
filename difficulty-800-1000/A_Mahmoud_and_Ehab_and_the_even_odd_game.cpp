// https://codeforces.com/problemset/problem/959/A
// nazrulislam_7
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
 cout << (n % 2 != 0 ? "Ehab\n" : "Mahmoud\n");
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}