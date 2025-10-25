// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
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
    int a, b, c;   cin >> a >> b >> c;
    int mn = min({a, b, c});
    int mx = max({a, b, c});
    int mid = a + b + c - mn - mx;
    cout<<mn<<nl<<mid<<nl<<mx<<nl<<nl;
    cout<<a<<nl<<b<<nl<<c<<nl; 
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}   