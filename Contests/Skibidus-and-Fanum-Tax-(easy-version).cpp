#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using ll = long long;
using vll = vector<ll>;

bool solve()
{
    int n, m;
    cin >> n >> m;
    vll Vn(n), Vm(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> Vn[i];
    }
    for (int i = 0; i < 1; i++)
    {
        cin >> Vm[i];
    }

    ll b = Vm[0];
    ll prev = -1e18;

    for (int i = 0; i < n; ++i)
    {
        ll op1 = Vn[i];
        ll op2 = b - Vn[i];
        bool ok1 = (op1 >= prev);
        bool ok2 = (op2 >= prev);

        if (ok1 && ok2)
        {
            prev = min(op1, op2);
        }
        else if (ok1)
        {
            prev = op1;
        }
        else if (ok2)
        {
            prev = op2;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        bool Flag = solve();
        if (!Flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
