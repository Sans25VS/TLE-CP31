#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);  // v[0] will be unused to make 1-based indexing easier
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        vector<int> presum(n + 1, 0);  // initialize prefix sum array
        for (int i = 1; i <= n; i++) {
            presum[i] = presum[i - 1] + v[i];
        }

        int q;
        cin >> q;
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            
            long long sum = presum[n] - (presum[r] - presum[l - 1]) + k * (l-r + 1);
            
            if (sum % 2 == 0) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
