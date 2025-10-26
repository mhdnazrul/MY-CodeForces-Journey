// problem link:https://codeforces.com/problemset/problem/510/A
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
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2==0){
                cout << '#';
            }
            else{
                if(i%4==1){
                    if(j==m-1){
                        cout << '#';
                    }
                    else{
                        cout << '.';
                    }
                }
                else{
                    if(j==0){
                        cout << '#';
                    }
                    else{
                        cout << '.';
                    }
                }
            }
        }
        cout << nl;
    }
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