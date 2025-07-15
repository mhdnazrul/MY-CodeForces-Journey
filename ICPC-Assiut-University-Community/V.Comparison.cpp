#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num1, num2;
  char ch;
  cin >> num1 >> ch >> num2;
  if (ch == '>')
  {
    if (num1 > num2)
    {
      cout << "Right" << endl;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  else if (ch == '<')
  {
    if (num1 < num2)
    {
      cout << "Right" << endl;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  else
  {
    if (num1 == num2)
    {
      cout << "Right" << endl;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  return 0;
}