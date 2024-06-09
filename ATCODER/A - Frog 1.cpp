#include <bits/stdc++.h>
using namespace std;

int frog1(int i, vector<int> &v, vector<int> &dp) {
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];
    
    int cost = INT_MAX;
    cost = min(cost, frog1(i-1, v, dp) + abs(v[i] - v[i-1]));
    if (i > 1) {
        cost = min(cost, frog1(i-2, v, dp) + abs(v[i] - v[i-2]));
    }
    
    dp[i] = cost; // Store the result in dp array
    return dp[i];
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> dp(n, -1); // Initialize dp vector with -1
    cout << frog1(n-1, v, dp) << endl;
    return 0;
}
