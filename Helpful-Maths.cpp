#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;

    string s;
    cin >> s;

    vector<int> digit;
    string op = "";
    int len_op = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            digit.push_back(s[i] - '0');
        }
        if (s[i] == '+') {
            op += '+';
            len_op++;
        }
    }

    sort(digit.begin(), digit.end());

    for (int j = 0; j < digit.size(); ++j) {
        cout << digit[j];
        if (j < len_op) {
            cout << op[j];
        }
    }

    cout << endl;
    return 0;
}

