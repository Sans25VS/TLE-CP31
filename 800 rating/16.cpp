#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Edge case for a single element
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        bool sorted = true;
        int minimum = INT_MAX;

        for (int i = 0; i < n - 1; i++) { // Check up to n-2 to avoid out-of-bounds
            if (v[i] <= v[i + 1]) {
                minimum = min(minimum, v[i + 1] - v[i]);
            } else {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << minimum / 2 + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
