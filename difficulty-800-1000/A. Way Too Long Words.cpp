// https://codeforces.com/problemset/problem/71/A
//  nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int len = str.size();
        if (len <= 10)
            cout << str << endl;
        else
            cout << str[0] << len - 2 << str[len - 1] << endl;
    }
    return 0;
}
