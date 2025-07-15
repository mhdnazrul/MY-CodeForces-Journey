#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b;
    cin >> a >> b;
    if (a >= b)
    {
      cout << a << '\n';
    }
    else
    {
      int max_x = (2 * a) - b;
      cout << max(max_x, 0) << '\n';
    }
  }
  return 0;
}