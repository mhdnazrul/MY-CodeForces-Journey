// problem link:https://codeforces.com/contest/1494/problem/A
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
    string s;   cin>>s;
    int cnt=0;
    bool flag = false;
    for (int i = 0; i < s.size(); ++i) {
      if(s[i]=='A')cnt++;
      else if(s[i]=='B')cnt--;
      else if(s[i]=='C')cnt--;
    //   if(cnt<0){
    //     cout<<"NO\n";
    //     return;
    //   }
      if(cnt==0)flag=true;
    }
    cout<<(flag?"YES\n":"NO\n");
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