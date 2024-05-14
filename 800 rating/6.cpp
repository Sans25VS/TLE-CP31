#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        unordered_map<int,int>mpp; 
        bool ans = true;
        for(int i = 0 ;i < n; i++){
            mpp[v[i]]++;
            if(mpp.size() > 2){
                ans = false;
                break;
            }
        }
        if(mpp.size() == 2){
            int f1 = begin(mpp)->second;
            if(f1 != n/2 && f1 != (n+1/2))
                ans = false;
        }
    if(ans) cout << "yes" << endl;
    else cout << "no" << endl;
    
    }
    return 0;
}