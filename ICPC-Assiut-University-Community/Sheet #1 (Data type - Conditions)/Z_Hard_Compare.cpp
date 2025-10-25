// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    double first_val = b * log(a);
    double second_val = d * log(c);
    cout<<(first_val>second_val?"YES\n":"NO\n");
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