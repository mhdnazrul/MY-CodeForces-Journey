#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, res;
  char exp1, exp2;
  cin >> a >> exp1 >> b >> exp2 >> res;
  switch (exp1)
  {
  case '+':
    if (a + b == res)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << a + b << endl;
    }
    break;
  case '-':
    if (a - b == res)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << a - b << endl;
    }
    break;
  case '*':
    if (a * b == res)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << (long long)a * b << endl;
    }
    break;
  }
  return 0;
}