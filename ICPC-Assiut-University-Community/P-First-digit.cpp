#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x;
  string X_str, first_digit;
  cin >> x;
  X_str = to_string(x);
  first_digit = X_str.substr(0, 1);
  int first_digit_int = stoi(first_digit);
  if (first_digit_int % 2 == 0)
  {
    cout << "EVEN" << endl;
  }
  else
  {
    cout << "ODD" << endl;
  }
}