#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, countforA = 0, countforD = 0;
  cin >> t;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'A')
    {
      countforA++;
    }
    else if (s[i] == 'D')
    {
      countforD++;
    }
  }
  if (countforA > countforD)
  {
    cout << "Anton" << endl;
  }
  else if (countforA == countforD)
  {
    cout << "Friendship" << endl;
  }
  else
  {
    cout << "Danik" << endl;
  }
  return 0;
}