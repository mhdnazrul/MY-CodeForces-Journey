// N- Char.cpp
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
  char x;
  cin >> x;
  if (islower(x))
  {
    cout << char(toupper(x)) << endl;
  }
  else
  {
    cout << char(tolower(x)) << endl;
  }
  return 0;
}