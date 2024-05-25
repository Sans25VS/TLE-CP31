# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<tuple<long long,long long,long long>> projects(n);
    for(int i=0; i<n; i++){
        long long start,end,value;
        cin>>start>>end>>value;
        projects[i] = {end,start,value};
    }
    sort(projects.begin(),projects.end());
    long long bestrewards = 0;
    map<long long,long long>dp;
    dp[0] = 0;
    for(auto project : projects){
        dp.pus(project);
    }







    return 0;
}