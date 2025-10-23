// // https://codeforces.com/problemset/problem/136/A
// //Nazrul Islam
// #include <bits/stdc++.h>
// using namespace std;
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// using ll = long long;
// using vi = vector<int>;
// using vll = vector<ll>;
// const ll mod = 1e9 + 7;

// void solve() {
//  int n;
//  cin >> n;
//  vi V(n+1);
//  for (int i = 1; i <= n;i++)
//   cin >> V[i];

//  for (int i = 1; i <= n;i++){
//   for (int j = 1; j <= n;j++){
//    if(i==V[j])
//     cout << j << " ";
//   }
//  }
// }

// int main() {
//   FAST_IO;
//   //int T; cin >> T;while(T--)
//     solve();
//   return 0;
// }

// problem link:https://codeforces.com/problemset/problem/136/A
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
    vi vec(n);
    readV(vec);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i+1==vec[j])cout<<j+1<<" ";
      }
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