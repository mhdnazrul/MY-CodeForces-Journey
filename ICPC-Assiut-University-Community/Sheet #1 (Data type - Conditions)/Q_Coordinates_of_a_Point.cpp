// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
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
    float x, y;     cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "Origem";
    else if (x == 0.0)
        cout << "Eixo Y";
    else if (y == 0.0)
        cout << "Eixo X";
    else if (x > 0.0 && y > 0.0)
        cout << "Q1";
    else if (x < 0.0 && y > 0.0)
        cout << "Q2";
    else if (x < 0.0 && y < 0.0)
        cout << "Q3";
    else if (x > 0.0 && y < 0.0)
        cout << "Q4";
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