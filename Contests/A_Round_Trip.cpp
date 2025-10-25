// problem link: https://codeforces.com/contest/2161/problem/A
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
void solve() {
    ll R, X, D;
    int n;  
    cin >> R >> X >> D >> n;
    string s;   cin>>s;
    
    ll left = R, right = R;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
            left = abs(left - D);
            right += D;
        }
        else if(s[i]=='2'){
            if(right < X){
                cnt++;
                left = abs(left - D);
                right += D;
            }
            else if(left >= X)continue;
            else{
                cnt++;
                left = abs(left - D);
                right = min(right, X - 1) + D;
            }
        }
    }
    cout<<cnt<<nl;
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