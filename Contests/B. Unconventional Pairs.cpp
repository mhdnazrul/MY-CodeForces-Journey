// problem link:https://codeforces.com/contest/2149/problem/B
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n;  cin>>n;
    vector<int> vec(n);
    readV(vec);
    sort(all(vec));
    int cnt_mex = 0;
    for(int i=1; i<n; i+=2){
        int dis = vec[i] - vec[i-1];
        cnt_mex = max(dis, cnt_mex);
    }
    cout<< cnt_mex <<endl;
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