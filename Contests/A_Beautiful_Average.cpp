// https://codeforces.com/contest/2162/problem/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
void solve()
{
 int num, MEX = 0;
 cin >> num;
 vector<int> nums(num);
 for (int i = 0; i < num; i++)
 {
  cin >> nums[i];
  MEX = max(MEX, nums[i]);
 }
 cout << MEX << '\n';
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}