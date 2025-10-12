//https://codeforces.com/problemset/problem/734/A
//nazrulislam_7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;string s;     cin>>n>>s;
    int cnt_anton=0,cnt_dantik=0;
    for(int i=0;i<n;++i){
        if(s[i]=='A')cnt_anton++;
        else if(s[i]=='D') cnt_dantik++;
    }
    if(cnt_anton==cnt_dantik)cout<<"Friendship\n";
    else if(cnt_anton>cnt_dantik)cout<<"Anton\n";
    else cout<<"Danik\n";
    return 0;
}
