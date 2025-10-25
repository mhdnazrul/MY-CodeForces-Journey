// https://codeforces.com/problemset/problem/228/A
// Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 set<int> st = {a, b, c, d};
 cout << 4 - st.size() << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}