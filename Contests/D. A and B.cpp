// problem link:https://codeforces.com/contest/2149/problem/D
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
ll GET_val_V(vector<int> v){
  if(v.empty())return 0;
  ll idx = (ll)v.size() / 2;
  ll val = 0;
  for(int i=0; i<v.size();i++){
    val += abs(v[idx] - v[i]) - abs(idx-i);
  }
  return val;
}
void solve() {
    ll n; cin>>n;
    vector<int>a,b;
    for(int i=1; i<=n; i++){
      char ch;  cin>>ch;
      if(ch=='a')a.push_back(i);
      else b.push_back(i);
    }
    ll val_of_A = GET_val_V(a);
    ll val_of_B = GET_val_V(b);
    cout<<min(val_of_A, val_of_B)<<nl;
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