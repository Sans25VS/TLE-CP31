#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diff = 0;
        if(n == 1){
            cout<<arr[0]<<endl;
            break;+-
        }
        for(int i=0;i<n;i++){
            diff = max(diff,arr[i+1] - arr[i]);
        }
        cout << << endl;
    }

    return 0;
 }