// problem link:https://codeforces.com/contest/2167/problem/D
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
ll gcdll(ll a, ll b) {
    return b == 0 ? a : gcdll(b, a % b);
}
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    readV(a);

    ll g = a[0];
    for (int i = 1; i < n; ++i) g = gcdll(g, a[i]);

    ll ans = -1;
    for (ll x = 2; x <= 100; ++x) {  
        if (gcdll(g, x) == 1) {
            ans = x;
            break;
        }
    }

    cout << ans << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}