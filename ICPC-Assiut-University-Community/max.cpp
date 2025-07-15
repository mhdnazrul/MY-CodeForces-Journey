#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i];
  }
  int max_val = x[0];
  for (int j = 1; j < n; ++j)
  {
    if (max_val < x[j])
    {
      max_val = x[j];
    }
  }
  cout << max_val << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
