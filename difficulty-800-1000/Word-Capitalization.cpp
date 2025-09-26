#include <iostream>
#include <string>
#include <cctype>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main()
{
    FAST_IO;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if (i == 0)
            cout << (char)toupper(str[i]);
        else
            cout << str[i];
    }

    cout << endl;
    return 0;
}
