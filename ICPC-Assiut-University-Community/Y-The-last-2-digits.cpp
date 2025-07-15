#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long result = 1;
  result = (result * a) % 100;
  result = (result * b) % 100;
  result = (result * c) % 100;
  result = (result * d) % 100;

  cout << (result < 10 ? "0" : "") << result << endl;
  return 0;
}
