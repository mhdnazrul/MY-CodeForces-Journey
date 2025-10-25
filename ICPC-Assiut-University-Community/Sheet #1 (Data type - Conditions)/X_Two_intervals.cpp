// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int start_ptr = max(l1, l2);
    int end_pnt = min(r1, r2);
    if (start_ptr <= end_pnt)
        cout << start_ptr << " " << end_pnt << endl;
    else    cout << -1 << endl;
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