// problem link:https://codeforces.com/contest/2167/problem/G
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), c(n);
    readV(a);
    ll sum_val = 0;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        sum_val += c[i];
    }
    vector<ll> tp(n);
    ll best = 0;
    for (int i = 0; i < n; ++i) {
        tp[i] = c[i];
        for (int j = 0; j < i; ++j) {
            if (a[j] <= a[i]) tp[i] = max(tp[i], tp[j] + c[i]);
        }
        best = max(best, tp[i]);
    }
    cout << (sum_val - best) << '\n';
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