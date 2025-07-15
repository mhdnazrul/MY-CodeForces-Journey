#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int x)
{
  vector<int> result;
  for (int i = x - 1; i >= 0; --i)
    result.push_back(i);
  for (int i = n - 1; i > x; --i)
    result.push_back(i);
  if (x < n)
    result.push_back(x);
  for (int num : result)
    cout << num << " ";
  cout << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    solve(n, x);
  }

  return 0;
}
