#include <iostream>
#include <cmath> 
using namespace std;
using ll = long long;

void solve()
{
    ll n, k, p, temp_k;
    cin >> n >> k >> p;
    temp_k = abs(k);
    if (k == 0)
        cout << 0 << '\n';
    else if (temp_k > (n * p))
        cout << -1 << '\n';
    else if (temp_k != 0) 
    {
        int count = 0;
        while (temp_k > 0)
        {
            temp_k -= p;
            count++;
        }
        cout << count << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}