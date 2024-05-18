#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v;
        
        // Collect all divisors of n
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                v.push_back(i);
                if (i != n / i) {
                    v.push_back(n / i);
                }
            }
        }
        //sort(v.begin(), v.end());
        int count = 1;
        for (size_t i = 0; i < v.size() - 1; i++) {
            if (v[i+1] - v[i] == 1) {
                count++;
                continue;
            }
            break;
        }
        
        cout << count << endl;
    }
    return 0;
}
