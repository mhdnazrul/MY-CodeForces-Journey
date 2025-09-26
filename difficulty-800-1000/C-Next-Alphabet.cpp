#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  char ch;
  cin >> ch;
  int int_of_char = ch;
  if (ch == 'z')
  {
    cout << "a" << '\n';
  }
  else if (int_of_char > 96 && int_of_char < 122)
  {
    char char_of_Target = int_of_char + 1;
    cout << char_of_Target << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}