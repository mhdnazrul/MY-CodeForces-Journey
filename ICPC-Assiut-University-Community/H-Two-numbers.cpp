// H-Two-numbers.cpp
#include <iostream>
#include <cmath> // For floor, ceil, round
using namespace std;

int main()
{
  double A, B;
  cin >> A >> B;
  double result = A / B;
  cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
  cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
  cout << "round " << A << " / " << B << " = " << round(result) << endl;

  return 0;
}