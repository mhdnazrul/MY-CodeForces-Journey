// problem link:https://codeforces.com/contest/1452/problem/C
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
    string exp; cin>>exp;
    // Initialising Variables
    bool flag = true;
    int count = 0;
    int cnt=0;
    // Traversing the Expression
    for (int i = 0; i < exp.length(); i++) {

        if (exp[i] == '(') {
            count++;
        }
        else {

            // It is a closing parenthesis
            count--;
        }
        if(count==0)cnt++;
        if (count < 0) {

            // This means there are
            // more Closing parenthesis
            // than opening ones
            flag = false;
            break;
        }
    }

    // If count is not zero,
    // It means there are
    // more opening parenthesis
    if (count != 0) {
        flag = false;
    }

    cout<<cnt<<endl;
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