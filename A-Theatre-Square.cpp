#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
  long long n, m, a, x_axis, y_axis;
  cin >> n >> m >> a;
  x_axis = ceil((double)n / a);
  y_axis = ceil((double)m / a);
  cout << x_axis * y_axis << endl;
  return 0;
}