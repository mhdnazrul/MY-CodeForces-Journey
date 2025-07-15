#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    string str;
    cin >> str;
    int st = 0, ed = 0;
    for (int i = 0; i < str.size() - 1; ++i)
    {
        if (str[i] == 'u' && str[i + 1] == 's')
        {
            st = i;
            ed = i + 1;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (st == i && ed == i + 1)
        {
            cout << "i";
        }
        else
        {
            cout << str[i];
        }
    }
    cout << endl;
}
int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

