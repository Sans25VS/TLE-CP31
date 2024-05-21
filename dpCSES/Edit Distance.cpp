#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string m;
cin>>m;
int l = s.length();
int r = m.length();
vector<vector<int>> dp(l+1,vector<int>(r+1));
for(int i = 1; i <= l; i++){
dp[i][0] = i;
} 
for(int i = 1; i <= r; i++){
    dp[0][i] = i;
}
for(int i = 1; i <= l; i++){
    for(int j = 1; j <= r; j++){
        char x = s[i-1];
        char y = m[j-1];
        if(x == y){
            dp[i][j] = dp[i-1][j-1];
        } 
        else {
            dp[i][j] = dp[i-1][j-1] + 1;
        }
        dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
        dp[i][j] = min(dp[i][j],dp[i][j-1]+1);


    }
}
cout << dp[l][r] << endl;

return 0;
}