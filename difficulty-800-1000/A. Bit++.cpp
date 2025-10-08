// https://codeforces.com/problemset/problem/282/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '+' && str[i + 1] == '+')
                cnt++;
            else if (str[i] == '-' && str[i + 1] == '-')
                cnt--;
        }
    }
    cout << cnt << endl;
}

int main()
{
    FAST_IO;
    // int T; cin >> T;while(T--)
    solve();
    return 0;
}
