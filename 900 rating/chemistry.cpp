#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        } 
        int singles = 0;
        for(auto it: m){
            if(it.second == 1){
                singles ++;
            }
        }
        if(singles == k || singles - 1 == k ){
            cout<<"YES"<<endl;
        }
       else{ cout<<"NO"<<endl;
    }
    }
return 0;
}