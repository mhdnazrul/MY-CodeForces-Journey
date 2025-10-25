//https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt = 0;
    for(int i=0;i<n;++i){
          int a,b,c;cin>>a>>b>>c;
          int sum = a+b+c;
          if(sum>=2)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
