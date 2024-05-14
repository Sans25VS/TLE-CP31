#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n-1;i++){
            cin>>arr[i];
        }
        int sumpos = 0;
        int sumneg = 0;
        for(int i = 0 ; i < n-1;i++){
        if(arr[i]<0){
            sumneg += arr[i];
        }
        else{
            sumpos+=arr[i];
        }

}
if(abs(sumneg)>sumpos){
    cout<< abs(sumneg+sumpos)<<endl;
}
else{
    cout<< (abs(sumneg)-sumpos) << endl;
}



    }
    return 0;
}