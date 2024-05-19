#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    vector<int> s(n);
    for(int i = 0 ; i < n ; i++){
        cin>>s[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i = 1 ; i <= n ; i++){
        for(int sumleft = 1 ; sumleft <= x ; sumleft++){
            int w = v[i-1];
            int value= s[i-1];
            int pick = (sumleft >= w ? (dp[i-1][sumleft-w])+value : 0);
            int skip = dp[i-1][sumleft]; 
            dp[i][sumleft] = max(skip,pick);
            }
        }
    cout << dp[n][x] << endl;






    return 0;
}