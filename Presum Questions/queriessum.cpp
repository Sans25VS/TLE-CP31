#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> arr(n + 2, 0);  // Using long long to handle large sums and n+2 to avoid boundary issues
    
    while (m--) {
        int a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }
    
    // Applying prefix sum to get the actual array values
    long long max_value = LLONG_MIN;
    long long current_value = 0;
    
    for (int i = 1; i <= n; ++i) {
        current_value += arr[i];
        if (current_value > max_value) {
            max_value = current_value;
        }
    }
    
    cout << max_value << endl;
    return 0;
}
