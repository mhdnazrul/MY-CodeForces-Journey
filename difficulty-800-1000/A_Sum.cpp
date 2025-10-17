// problem link:https://codeforces.com/problemset/problem/1742/A
// Author: cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long; using ull = unsigned long long;
using vi = vector<int>; using vll = vector<ll>;
using pii = pair<int, int>; using pll = pair<ll, ll>;
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
const ll MOD = 1e9 + 7;const ll INF = 1e18;
template<class T> void read(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void print(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    vi v(3);
    read(v);
    sort(all(v));
    if(v[0]+v[1]==v[2])YES;
    else NO;
}

int32_t main() {
    fast_io    int t = 1;  cin >> t;
    while(t--) solve();
    return 0;
}
