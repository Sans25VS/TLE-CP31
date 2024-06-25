#include<bits/stdc++.h>
using namespace std;;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>ans;
        if(n%k != x){
        ans.push_back(n%k);
        }
        for(int i = 1; i <=n/k; i++){
            if(k == x){
                cout<<"No"<<endl;
                break;
            }
            ans.push_back(k);
        }
        cout<<"YES"<<endl;
        for(int i = 0; i <ans.size(); i++) {
           
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
    
    }
    return 0;
}