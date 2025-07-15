#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  ll memo, momo, k;
  cin >> memo >> momo >> k;
  if (memo % k == 0 && momo % k == 0)
  {
    cout << "Both" << endl;
  }
  else if (memo % k == 0)
  {
    cout << "Memo" << endl;
  }
  else if (momo % k == 0)
  {
    cout << "Momo" << endl;
  }
  else
  {
    cout << "No One" << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}