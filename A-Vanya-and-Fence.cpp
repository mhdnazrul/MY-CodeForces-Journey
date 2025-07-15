#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, h, sum = 0;
  cin >> t >> h;
  while (t--)
  {
    int n;
    cin >> n;
    if (h >= n)
      sum += 1;
    else
      sum += 2;
  }
  cout << sum << endl;
  return 0;
}