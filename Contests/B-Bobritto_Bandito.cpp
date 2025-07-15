#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int segLen = m + 1;
    int spread = n - m;

    for (int x = 0; x <= spread; ++x)
    {
      int l_prime = l - x;
      int r_prime = r + (spread - x);
      if (r_prime - l_prime + 1 == segLen)
      {
        cout << l_prime << " " << r_prime << "\n";
        break;
      }
    }
  }

  return 0;
}
