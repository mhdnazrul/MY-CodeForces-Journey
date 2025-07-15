// G-Summation-from-1toN.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long sum = (long long)N * (N + 1) / 2;
  cout << sum << endl;
  return 0;
}