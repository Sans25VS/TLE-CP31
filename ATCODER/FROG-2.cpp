#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of jumps to reach the end
int minJumps(vector<int> &v, int n, int k) {
    // Base case: If we're already at the end, no jumps needed
    if (n == 0) {
        return 0;
    }

    // Handle edge cases where k is too large or the array is too small
    if (k >= n || n <= 1) {
        return -1; // Not possible to reach the end with given constraints
    }

    // Array to store minimum jumps required to reach each index
    vector<int> jumps(n, INT_MAX);
    jumps[0] = 0; // No jumps needed to reach the first element

    // Dynamic programming approach:
    for (int i = 1; i < n; i++) {
        // Consider all reachable elements within the jump limit (k)
        for (int j = 1; j <= min(k, i); j++) {
            if (jumps[i - j] != INT_MAX) { // Ensure we're not coming from an unreachable position
                // Update jumps[i] with the minimum of current value and new candidate
                jumps[i] = min(jumps[i], jumps[i - j] + abs(v[i] - v[i - j]));
            }
        }
    }

    // Check if the last element is reachable
    if (jumps[n - 1] == INT_MAX) {
        return -1; // Not possible to reach the end with given k
    }

    // Return the minimum number of jumps
    return jumps[n - 1];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int min_jumps = minJumps(v, n, k);
    if (min_jumps == -1) {
        cout << endl;
    } else {
        cout << min_jumps << endl;
    }

    return 0;
}
