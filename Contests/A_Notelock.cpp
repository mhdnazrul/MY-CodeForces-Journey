// problem link:https://codeforces.com/contest/2154/problem/A
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    int low_idx = -1e9; 

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            if (low_idx < i - k + 1) {
                ans++;
                low_idx = i;
            } else {
                low_idx = i;
            }
        }
    }
    cout << ans << "\n";
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


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	gcd(b % a, a);
}

ll lcm(ll a, ll b)
{
	return (a*b) / gcd(a, b);
}

int main()
{
	int n;
	cin >> n;
	int arr[5] = {0};
	for (int i = 0; i < n; i++)
	{
		int d;
		cin >> d;
		arr[d]++;
	}
	int c = 0;
	c = arr[4] + arr[3];
	arr[1] -= arr[3];
	c += arr[2] / 2;
	if (arr[2] % 2)
	{
		c++;
		arr[1] -= 2;
	}
	if (arr[1] > 0)
		c += arr[1] / 4 + (arr[1] % 4 != 0);
	cout << c << endl;
}