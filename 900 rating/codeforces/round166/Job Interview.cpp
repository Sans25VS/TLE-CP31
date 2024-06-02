#include<bits/stdc++.h>
using namespace std;
int maxnumber(string &s){
   int maxChar = s[0];
   int maxind = 0;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] >= maxChar) {
            maxChar = s[i];
            maxind = i;
        }
    }
    return maxind;
    }
int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
int yoo = maxnumber(s);
     if(yoo == s.length()){
        for(int j = 0; j < yoo;j++){
            if( )
        }
            }
     }
    



}

    return 0;
}