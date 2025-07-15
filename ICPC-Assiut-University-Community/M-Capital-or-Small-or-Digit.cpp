// M-Capital-or-Small-or-Digit.cpp
#include <iostream>
using namespace std;
int main()
{
  char x;
  cin >> x;
  int ascii_value = (int)x;
  if (48 <= ascii_value && ascii_value <= 57)
  {
    cout << "IS DIGIT" << endl;
  }
  else if (65 <= ascii_value && ascii_value <= 90)
  {
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL" << endl;
  }
  else if (97 <= ascii_value && ascii_value <= 122)
  {
    cout << "ALPHA" << endl;
    cout << "IS SMALL" << endl;
  }

  return 0;
}