#include <iostream>
#include<vector>

using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  ll n, ans = 0;
  cin >> n;
  ll a = 1;
  while (a <= n)
  {
    a *= 10;
  }
  a /= 10;
  ll b = a;
  while (b <= n)
  {
    b += a;
  }
  ans = b - n;
  cout << ans << endl;
}

int main() {
FAST_IO;
solve();
return 0;
}