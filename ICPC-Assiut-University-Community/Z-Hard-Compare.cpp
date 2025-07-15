#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  double logAB = b * log(a);
  double logCD = d * log(c);

  if (logAB > logCD)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}