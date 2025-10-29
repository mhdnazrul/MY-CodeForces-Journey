// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
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
    char ch;  cin>>ch;
    int s=ch;
    if(s>=65 && s<=90)
        cout<<"ALPHA\nIS CAPITAL\n";  
    else if(s>=97 && s<=122) 
        cout<<"ALPHA\nIS SMALL\n";   
    else if(s>=48 && s<=57)
        cout<<"IS DIGIT"<<nl;
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