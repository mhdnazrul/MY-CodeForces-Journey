// D-Ali-Baba-and-Puzzles.cpp
#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || a * b + c == d || a * b - c == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}