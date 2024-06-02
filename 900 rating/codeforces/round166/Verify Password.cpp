#include<bits/stdc++.h>
using namespace std;
bool isSorted(const vector<int> &v) {
    for (size_t i = 0; i < v.size() - 1; ++i) {
        if (v[i] > v[i + 1]) {
            return false;
        }
 
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v(n);
        for (char ch : s) {
        int asciiValue = static_cast<int>(ch);
        v.push_back(asciiValue);
    }
   if(isSorted(v)) {
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}