#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i <= n; i++) {
            cin >> b[i];
        }
        
        int app = INT_MAX;
        for (int i = 1; i <= n; i++) {
            int number = abs(b[n] - a[i-1]);
            app = min(app, number);
        }
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            count += abs(a[i] - b[i]);
        }
        if(app != 0){
        count += abs(app - b[n]);}
        
        cout << count << endl;
    }
    return 0;
}
