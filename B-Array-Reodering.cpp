#include<bits/stdc++.h>
using namespace std;
#define FAST_OI ios::sync_with_stdio(false); cin.tie(nullptr);
int gcd(int a, int b)
{
    if(b<=0) return a;
    while(b!=0){
        int tp = b;
        b = a%tp;
        a = tp;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        vector<int> nums(n);
        for(int i=0; i<n; ++i)
            cin>>nums[i];

        int ans = 0;
        for(int i=0; i<n-1; ++i){
            int temp=0;
            temp = gcd(nums[i],nums[i+1]);
            ans +=temp;
        }
    }
}
