# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1));
   // for obtaining sum zero any value is possible iska mtlb hmm koi bhi coin utha skta hai issliya yai loop chalayagaya hai

    for(int i = 0;i< n;i++){
        dp[i][0] = 1; 
    }

    for(int i = n-1;i >= 0;i--){
        for(int j = 1 ;j <= x;j++){
            int notpick = dp[i+1][j];
            int picking = 0;
            if(v[i]<=j){
                picking = dp[i][j-v[i]];
            }
            dp[i][j] = (notpick + picking)%(1000000007);
        }
    }
    cout<<dp[0][x]<<endl;
    return 0;
}