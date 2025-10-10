// A. Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ln = s.length();
    int cnt = 0;
    for (int i = 0; i < ln; ++i)
    {
        if (s[i] == '4' || s[i] == '7')
            cnt++;
    }
    if (cnt == 4 || cnt == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
}
