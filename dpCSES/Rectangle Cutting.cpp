# include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >>b;
    vector<vector<int>> dp(a + 1, vector<int>(b+1,1e9));
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
           if(i == j){
            dp[i][j] = 0;
            continue;
           }
           // doinng the horizontal cuts 
           for(int k = 1;k<=i-1;k++){
            dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j] + 1);
        }
        //doing the vertical cuts
        for(int h = 1;h<=j-1;h++){
            dp[i][j] = min(dp[i][j], dp[i][h]+dp[i][j-h]+1);
        }
        }
            }
    cout<< dp[a][b] << endl;

    return 0;
}