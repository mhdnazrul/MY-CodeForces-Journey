// https://codeforces.com/problemset/problem/282/A
//  Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
int main()
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
    return 0;
}
