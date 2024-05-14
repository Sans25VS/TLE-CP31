#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    string s ;
    cin>>s;
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            count++;
            continue;
        }
    }if(count /2 == 0){
    cout << count/2<< endl;}
    if (count /2 != 0){
        cout << count/2+1<<endl;
    }
}

    return 0;

}