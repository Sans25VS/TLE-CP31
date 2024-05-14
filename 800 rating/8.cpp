#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_map<int, int> hash;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            hash[arr[i]]++;
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (hash[k] >= hash[arr[i]]) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
