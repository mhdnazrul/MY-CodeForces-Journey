// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
void solve() {
    ll a, b;
    char op;
    cin >> a >> op >> b; 
    if(op == '<')
        cout << (a < b ? "Right" : "Wrong") << nl;
    else if(op == '>')
        cout << (a > b ? "Right" : "Wrong") << nl;
    else if(op == '=')
        cout << (a == b ? "Right" : "Wrong") << nl;
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