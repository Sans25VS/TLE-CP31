#include<bits/stdc++.h>
using namespace std;
bool odd(int &sum){
    if(sum&1 == 1){
        return 1;
    }
    return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){

    int n,q;
    cin >> n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];}
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
    
    
    for(int i = l;i<=r;i++){
        sum-=arr[i];
    }
    sum = sum + k*(r-l);
    }
    
    if(odd(sum)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}