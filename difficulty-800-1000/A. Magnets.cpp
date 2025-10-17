// problem link:https://codeforces.com/problemset/problem/344/A
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long; using ull = unsigned long long;
using vi = vector<int>; using vll = vector<ll>;
using pii = pair<int, int>; using pll = pair<ll, ll>;
#define int long long
#define pb push_back
#define ff first
#define ss second
#define sortV(x) (x).begin(), (x).end()
#define rsortV(x) (x).rbegin(), (x).rend()
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
const ll MOD = 1e9 + 7;const ll INF = 1e18;
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n;  cin>>n;
    vector<string> v(n);
    readV(v);
    int cnt=1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1])cnt++;
    }
    cout<<cnt<<endl;
}

int32_t main() {
    fast_io;
    //int T; cin >> T;while(T--)
                         solve();
    return 0;
}