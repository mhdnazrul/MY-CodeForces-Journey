// problem link:https://codeforces.com/problemset/problem/144/A
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;        using ull = unsigned long long;
using vi = vector<int>;      using vll = vector<ll>;
using pii = pair<int, int>;  using pll = pair<ll, ll>;
using vpii = vector<pii>;    using vpll = vector<pll>;
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
const ll MOD = 1e9 + 7;const ll INF = 1e18;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n;  cin>>n;
    int minidx = 999, maxidx = -999, minptr=0,maxptr=0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x<=minidx){
            minidx = x;
            minptr = i;
        }
        if(x>maxidx){
            maxidx = x;
            maxptr = i;
        }
    }
    int ans = 0;
    if(minptr<maxptr)
        ans -=1;
    ans += maxptr + (n-minptr-1);
    cout<< ans <<endl;
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