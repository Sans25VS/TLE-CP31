# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }
    vector<int>dp(x+1);
    dp[0]  =  1;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n;j++){
            if(v[j] <= i){
                dp[i] = (dp[i] + dp[i-v[j]])%(1000000007);
                
        }
    }

    }

    cout << dp[x] << endl;


    return 0;
}