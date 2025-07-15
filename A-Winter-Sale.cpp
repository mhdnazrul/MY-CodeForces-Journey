#include <iostream>
#include <iomanip>
using namespace std;

void solve()
{
  double discountPercentage, discountedPrice, originalPrice;
  cin >> discountPercentage >> discountedPrice;
  originalPrice = (100 * discountedPrice) / (100 - discountPercentage);
  cout << fixed << setprecision(2) << originalPrice << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}