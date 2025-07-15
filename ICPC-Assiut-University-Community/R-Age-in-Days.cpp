#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  cout << N / 365 << " years" << endl;
  N = N % 365;
  cout << N / 30 << " months" << endl;
  N = N % 30;
  cout << N << " days" << endl;
  return 0;
}