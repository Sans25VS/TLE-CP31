#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int>dp(x+1,1e9);
    dp[0] = 0;
    int sum = 0;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(v[j]<=i){
                dp[i] = min(dp[i] ,dp[i- v[j]] + 1);
            }
        }
    }
    cout<<(dp[x] < 1e9 ? dp[x] : -1)<<endl;
    return 0;
}