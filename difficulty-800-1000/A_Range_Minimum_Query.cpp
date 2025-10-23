// problem link:https://codeforces.com/edu/course/3/lesson/18/1/practice/contest/619571/problem/A
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
    int n;  cin>>n;
    vector<int> vec(n);
    readV(vec);
    int q;  cin>>q;
    
    while(q--){
        int st,ed;  cin>>st>>ed;
        int mn = *min_element(vec.begin() + st, vec.begin() + ed + 1);
        cout<<mn<<nl;
    }
    
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