#include<bits/stdc++.h>
using namespace std;
int main(){

        int t;
        cin>>t;
        while(t--){
            int n;
            cin >> n;
            vector<int>v(n);
            for(int i=0; i<n; i++){
                cin>>v[i];
            }
            int count = INT_MAX;
        for(int i=0; i<n; i++){

            if(v[i] != i){
                int num = abs(v[i] - i);
                count = min(count,num);
            }
            else{
                continue;
            }
            
            
        }
        cout << count << endl;
        }
    return 0;
}