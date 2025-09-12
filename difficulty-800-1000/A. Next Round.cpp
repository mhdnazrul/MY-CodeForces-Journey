// https://codeforces.com/problemset/problem/158/A
// Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi points(n);
    for (int i = 0; i < n; ++i)
        cin >> points[i];
    int cnt = 0, Flag = points[k - 1];
    for (int j : points)
    {
        if (j > 0 && j >= Flag)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    FAST_IO;
    // int T; cin >> T;while(T--)
    solve();
    return 0;
}