#include<bits/stdc++.h>
using namespace std;
bool checkeven(unordered_map<char,int>&mp){
    for(const auto it : mp){
        if(it.second%2 !=0){
            return false;
        }
    }
    return true;
}
int maxiii(string &s){
    int maxlength = 0;
    int n = s.length();
    unordered_map<char,int> mp;
    for(int i = 0;i<n;++i){
        //unordered_map<char,int> mp;
        for(int j = i;j<n;++j){
            mp[s[j]]++;
            if(checkeven(mp)){
                maxlength = max(maxlength,j-i+1);
            }
        }
    }
    return maxlength;
}



int main(){
    string s;
    cin>>s;
    int result = maxiii(s);
    cout<<result<<endl;

    return 0;
}