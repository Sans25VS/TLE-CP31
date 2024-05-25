#include<bits/stdc++.h>
using namespace std;
 int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < i; ++j)
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
        return *max_element(dp.begin(), dp.end());
    }
int main(){
int t;
cin>>t;
vector<int>v(t);
for (int i = 0; i < t; i++){
    cin>>v[i];
}
cout << lengthOfLIS(v);
    return 0;
}