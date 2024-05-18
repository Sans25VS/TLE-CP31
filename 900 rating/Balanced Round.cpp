#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int count = 1;
        int l = 1;
        for(int i=1;i<n;i++){
            if((v[i]-v[i-1])<=k)
                    count++;
        
            else count = 1;
            
            l = max(l,count);
        }
        cout<<n-l<<endl;
    }
    return 0;
}