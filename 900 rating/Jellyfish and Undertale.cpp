#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools(n);
        for (int i = 0; i < n; i++) {
            cin >> tools[i];
        }
       // sort(tools.begin(), tools.end());
        long long sum = b;
       // int finalsum = b;
        for (int i = 0; i < n; i++) {
            sum += min(1LL+tools[i],a*1LL)-1;
        }
        cout << sum << endl;
    
    }
    return 0;
}
