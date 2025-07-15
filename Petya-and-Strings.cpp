#include <iostream>
#include <string>
#include <cctype>

using namespace std;
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);

int main()
{
  FAST_IO;
  string s1, s2;
  cin >> s1 >> s2;

  string lower_s1 = s1;
  string lower_s2 = s2;

  for (char &c : lower_s1)
    c = tolower(c);
  for (char &c : lower_s2)
    c = tolower(c);

  if (lower_s1 < lower_s2)
  {
    cout << -1 << endl;
  }
  else if (lower_s1 > lower_s2)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }

  return 0;
}