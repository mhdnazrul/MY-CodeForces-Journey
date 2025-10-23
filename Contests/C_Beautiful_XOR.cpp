// problem link:https://codeforces.com/contest/2162/problem/C
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
    int a,b;    cin>>a>>b;
    if(__builtin_clz(a) > __builtin_clz(b))
        cout << "-1\n";
    else if(a == b)
        cout << "0\n";
    else{
        vi v;
        for(int i = 0; i < 31; i++){
            int x = (1 << i);
            if(x <= a && (a & x) == 0)
                a += x, v.push_back(x);
        }
        for(int i = 0; i < 31; i++){
            int x = (1 << i);
            if(x <= a && (b & x) == 0)
                 v.push_back(x);
        }
        cout << v.size() << '\n';
        for(auto z : v) 
            cout << z << ' ';
        cout << '\n';
        }
}

int32_t main() {
    fast_io;
    int T; cin >> T;while(T--)
                         solve();
    return 0;
}