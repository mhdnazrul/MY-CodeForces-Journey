#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
bool isODD(ll n)
{
   if (n <= 2) {
        return false;
    }

    if (n % 2 != 0) {
        return true;
    } else {
        while (n % 2 == 0) {
            n /= 2;
        }
        return n > 1;
    }
}
int main()
{
    FAST_IO;
    int t;cin>>t;
    while(t--){
    ll n;cin>>n;
    if(isODD(n)){
        cout<<"YES\n";
    }else{
     cout<<"NO\n";
       }
    }
    return 0;
}
