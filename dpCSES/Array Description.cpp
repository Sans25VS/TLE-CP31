#include<bits/stdc++.h>
using namespace std;
bool isvalid(int x,int m){
    return x >= 1 && x <=m;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    //base case agar pehla element 0 hai yaaa phir k hai too 
    for(int i = 1; i <= m; i++) {
        if(v[0]  == i || v[0] == 0){
        dp[1][i] = 1;
        }
    }
    for(int i = 2 ; i <= n; i++) {
        for(int j = 1; j <= m; j++){
        if(v[i-1] != 0 && v[i-1] != j){ 
            dp[i][j] = 0;
            continue;
        }
        for(int prev = j-1; prev <= j+1; prev++){
            if(!isvalid(prev,m)){
                continue;
                }
                dp[i][j] = (dp[i][j] + dp[i-1][prev])%(1000000007);

    }
    }
    }
    int ans = 0;
    for(int i = 1 ; i <= m; i++) {
        ans = (ans + dp[n][i])%(1000000007);
    }
    cout << ans << endl;
    return 0;

}