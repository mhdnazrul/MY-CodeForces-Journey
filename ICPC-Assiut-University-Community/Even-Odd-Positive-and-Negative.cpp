#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int t;
  cin >> t;
  vector<int> n(t);
  for (int i = 0; i < t; ++i)
  {
    cin >> n[i];
  }
  int even = 0, odd = 0, positive = 0, negative = 0;
  for (int i = 0; i < t; ++i)
  {
    if (n[i] == 0 || n[i] % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
    if (n[i] > 0)
    {
      positive++;
    }
    else if (n[i] < 0)
    {
      negative++;
    }
  }
  cout << "Even: " << even << '\n';
  cout << "Odd: " << odd << '\n';
  cout << "Positive: " << positive << '\n';
  cout << "Negative: " << negative << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}