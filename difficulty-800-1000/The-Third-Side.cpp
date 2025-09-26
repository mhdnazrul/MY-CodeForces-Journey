#include <bits/stdc++.h>
using namespace std;

void sumofnumber(int a)
{
  int sum = 0;
  for (int i = 0; i < a; i++)
  {
    int num;
    cin >> num;
    sum += num;
  }
  if (a > 1)
  {
    cout << sum - (a - 1) << endl;
  }
  else
  {
    cout << sum << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    sumofnumber(a);
  }
  return 0;
}
