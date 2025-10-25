// problem link:https://codeforces.com/contest/1999/problem/B
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
int f(int a, int b){
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
}
void solve() {
    int a, b, c, d; cin>>a>>b>>c>>d;
    int ans = 0;
    if ((f(a, c) + f(b, d)) > 0)
        ans += 1;
    if (f(a, d) + f(b, c) > 0)
        ans += 1;
    if (f(b, c) + f(a, d) > 0)
        ans += 1;
    if (f(b, d) + f(a, c) > 0)
        ans += 1;
    cout<<ans<<nl;
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
