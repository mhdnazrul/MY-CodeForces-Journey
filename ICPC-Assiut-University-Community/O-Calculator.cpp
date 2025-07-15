#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
  long long A, B, result;
  char ch;
  cin >> A >> ch >> B;
  switch (ch)
  {
  case '+':
    result = A + B;
    break;
  case '-':
    result = A - B;
    break;

  case '*':
    result = A * B;
    break;

  case '/':
    result = A / B;
    break;
  default:
    break;
  }
  cout << result << endl;

  return 0;
}