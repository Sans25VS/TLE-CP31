#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<bool> dp(200000);
    set<int> distinctsums;
    int total = 0;
    dp[0] = true;
    for(auto coin : v){
        total += coin;
        for(int i = total;i>=coin;i--){
            if(dp[i-coin]&&dp[i] != -1){
                dp[i] = true;
                distinctsums.insert(i);
            }
        }
    }

    cout<<distinctsums.size()<<endl;
    for(auto it : distinctsums){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}