#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  ll eyes, mouth, body;
  cin >> eyes >> mouth >> body;
  if (eyes >= 2 && mouth >= 1 && body >= 1)
  {
    ll A = min(eyes / 2, min(mouth, body));
    ll B = min((eyes - A) / 2, body - A);
    cout << A + B << endl;
  }
  else
  {
    cout << min((eyes + 1 )/ 2, body) << endl;
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}