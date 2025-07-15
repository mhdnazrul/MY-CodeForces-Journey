#include <bits/stdc++.h>
using namespace std;

int main()
{
  double n;
  cin >> n;
  int int_value = n;
  float float_value = n - int_value;
  if (float_value > 0)
  {
    cout << "float " << int_value << " " << float_value << endl;
  }
  else
  {
    cout << "int " << int_value << endl;
  }
  return 0;
}