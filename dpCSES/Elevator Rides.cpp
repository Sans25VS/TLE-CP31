#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
   vector<pair<int,int>> dp(1<<n,{1e9,1e9});
   dp[0] = {1,0};
   for(int mask = 1; mask < (1<<n); mask++){
    for(int bit = 0; bit < n;bit++)
    if((1<<bit)&mask)
    {    
        int space_taken = dp[mask^(1<<bit)].second;
        if(space_taken + v[bit]<=x){
            dp[mask] = min(dp[mask],{dp[mask^(1<<bit)].first , space_taken+v[bit]}); }
        else{
            dp[mask] = min(dp[mask],{dp[mask^(1<<bit)].first+1,v[bit]});
        }
        }
    }
    cout<<dp[(1<<n) - 1].first;
    return 0;
}