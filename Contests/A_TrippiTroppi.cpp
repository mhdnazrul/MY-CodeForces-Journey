#include <iostream>
#include <vector>
#include <string>
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
  string text;
  getline(cin, text);
  for (int i = 0; i < text.length(); ++i)
  {
    if (i == 0)
      cout << text[i];
    else if (text[i] == ' ')
      cout << text[i + 1];
  }
  cout << endl;
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  for (int i = 0; i <= t; ++i)
  {
    solve();
  }
  return 0;
}