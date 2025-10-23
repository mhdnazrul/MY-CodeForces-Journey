// problem link:https://codeforces.com/problemset/problem/785/A
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
    int cnt=0;
    while(n--){
        string s;   cin>>s;
        if(s=="Icosahedron")cnt+=20;
        else if(s=="Cube")cnt+=6;
        else if(s=="Tetrahedron")cnt+=4;
        else if(s=="Dodecahedron")cnt+=12;
        else if(s=="Octahedron")cnt+=8;
    }
    cout<<cnt<<nl;
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