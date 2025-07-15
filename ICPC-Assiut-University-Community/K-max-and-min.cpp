// K-max-and-min.cpp
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, C, maximum, minimum;
  cin >> A >> B >> C;

  minimum = min(A, min(B, C));
  maximum = max(A, max(B, C));

  cout << minimum << " " << maximum << endl;

  return 0;
}