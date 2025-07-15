#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    long long n,tp;
    cin>>n;

    int cnt = 0;
    while(n>0){
        tp = n%10;
        n/=10;
        if(tp==7 || tp==4){
            cnt++;
        }
    }
    if(cnt==4 || cnt==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
