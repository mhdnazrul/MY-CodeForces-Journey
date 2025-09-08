//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int cnt = 0;
    for(int i=0;i<n;++i){
        int tp;cin>>tp;
        if(tp>k)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
