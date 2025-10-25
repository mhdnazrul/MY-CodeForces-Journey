// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
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
    float x;  cin>>x;
    if(x>=0.0 && x<=25.0)
        cout<<"Interval [0,25]";
    else if(x>25.0 && x<=50.0)
        cout<<"Interval (25,50]";
    else if(x>50.0 && x<=75.0)
        cout<<"Interval (50,75]";
    else if(x>75.0 && x<=100.0)
        cout<<"Interval (75,100]";
    else
        cout<<"Out of Intervals";
    cout<<nl;
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