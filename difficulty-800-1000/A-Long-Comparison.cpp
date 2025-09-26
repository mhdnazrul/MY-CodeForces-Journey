#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll a, b, z1, z2;
    cin >> a >> z1 >> b >> z2;

    int l1 = to_string(a).size() + z1;
    int l2 = to_string(b).size() + z2;

    if (l1 > l2)
      cout << ">" << endl;
    else if (l1 < l2)
      cout << "<" << endl;
    else
    {
      while (to_string(a).size() < to_string(b).size())
        a = a * 10;
      while (to_string(b).size() < to_string(a).size())
        b = b * 10;
      if (a > b)
        cout << ">" << endl;
      else if (a < b)
        cout << "<" << endl;
      else
        cout << "=" << endl;
    }
  }
  return 0;
}