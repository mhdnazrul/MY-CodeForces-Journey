// Fixed-Password.cpp
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true)
  {
    int x;
    cin >> x;
    if (x == 1999)
    {
      cout << "Correct" << '\n';
      break;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  return 0;
}