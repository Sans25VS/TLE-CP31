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
        vector<int>b;
        vector<int>c;
        for(int i=0; i<n; i++){
            if(v[i+1]%v[i] == 0){
                b.push_back(v[i]);
                continue;
        }
        
            c.push_back(v[i+1]);
        
    }
    if(b.size() == 0 || c.size() == 0){
        cout<<"-1"<<endl;
        
    }
    for (auto it : b) {
            cout << it << " ";
        }
        cout << endl;
        for (auto it1 : c) {
            cout << it1 << " ";
        }
        cout << endl;
    }
    return 0;
}